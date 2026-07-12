class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> ans;
        unordered_map<int, int> freq;

        for (int num : nums) {
            if (freq[num] == ans.size())
                ans.push_back({});

        ans[freq[num]].push_back(num);
        freq[num]++;
        }

        return ans;
        
    }
};