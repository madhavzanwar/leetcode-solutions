class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> result;
        vector<int> ans;
        for (int i = 0; i < nums1.size(); i++) {
            if (s2.count(nums1[i])) {
                result.insert(nums1[i]);
            }
        }
        for (int x : result) {
            ans.push_back(x);
        }

        return ans;
    }
};