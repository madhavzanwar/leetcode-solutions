class Solution {
public:
    int maximumLength(vector<int>& nums) {
        
        // store frequency of each number
        map<long long, int> freq;
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        int ans = 0;

        // try starting a chain from every unique number
        for (auto it = freq.begin(); it != freq.end(); it++) {
            long long x = it->first;
            int cnt = it->second;

            // special case: 1^anything = 1, so all 1s can be used
            if (x == 1) {
                int ones = cnt;
                if (ones % 2 == 0) ones--; // length must be odd
                ans = max(ans, ones);
                continue;
            }

            // build chain: x, x^2, x^4, ...
            // each step needs atleast 2 copies (left and right side)
            int chainLen = 0;
            long long cur = x;

            while (freq.count(cur) > 0 && freq[cur] >= 2) {
                chainLen++;
                if (cur > 1e9) break; // avoid overflow
                cur = cur * cur; // go to next: x^2, x^4...
            }

            // center element only needs 1 copy
            if (freq.count(cur) > 0 && freq[cur] >= 1) {
                chainLen++;
            }

            // pattern [x, x^2, x^2, x] = length 2*chain - 1
            int total = 2 * chainLen - 1;
            ans = max(ans, total);
        }

        return ans;
    }
};