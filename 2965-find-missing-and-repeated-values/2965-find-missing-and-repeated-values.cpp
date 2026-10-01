class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int repeated = 0, missing = 0;
        int n = grid.size();
        vector<int> freq(n * n + 1, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                freq[grid[i][j]]++;
            }
        }

        for (int v = 1; v <= n * n; v++) {
            if (freq[v] == 2) repeated = v;
            if (freq[v] == 0) missing = v;
        }

        return {repeated, missing};
    }
};