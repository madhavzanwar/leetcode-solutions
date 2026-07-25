class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAXX = 2048;

        // Keep only unique values
        unordered_set<int> st(nums.begin(), nums.end());
        vector<int> vals(st.begin(), st.end());

        vector<vector<bool>> dp(4, vector<bool>(MAXX, false));
        dp[0][0] = true;

        for (int t = 0; t < 3; t++) {
            for (int x = 0; x < MAXX; x++) {
                if (!dp[t][x]) continue;
                for (int v : vals) {
                    dp[t + 1][x ^ v] = true;
                }
            }
        }

        int ans = 0;
        for (bool ok : dp[3])
            if (ok) ans++;

        return ans;
    }
};