class Solution {
public:
    static const int MOD = 1000000007;

    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();

        vector<int> nzPos;          // positions of non-zero digits
        vector<long long> preSum;   // prefix sum of digits
        vector<long long> preNum;   // prefix concatenated number
        vector<long long> pow10(n + 1);

        pow10[0] = 1;
        for (int i = 1; i <= n; i++)
            pow10[i] = (pow10[i - 1] * 10) % MOD;

        preSum.push_back(0);
        preNum.push_back(0);

        // Store only non-zero digits
        for (int i = 0; i < n; i++) {
            if (s[i] != '0') {
                nzPos.push_back(i);
                int d = s[i] - '0';
                preSum.push_back(preSum.back() + d);
                preNum.push_back((preNum.back() * 10 + d) % MOD);
            }
        }

        vector<int> ans;

        for (auto &q : queries) {
            int l = q[0], r = q[1];

            // First non-zero >= l
            int left = lower_bound(nzPos.begin(), nzPos.end(), l) - nzPos.begin();

            // First non-zero > r
            int right = upper_bound(nzPos.begin(), nzPos.end(), r) - nzPos.begin();

            // No non-zero digits
            if (left == right) {
                ans.push_back(0);
                continue;
            }

            // Sum of digits
            long long sum = preSum[right] - preSum[left];

            // Number formed by concatenation
            long long x = (preNum[right] -
                          (preNum[left] * pow10[right - left]) % MOD +
                          MOD) % MOD;

            ans.push_back((x * sum) % MOD);
        }

        return ans;
    }
};