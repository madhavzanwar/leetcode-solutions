class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        const int n = nums.size();
        vector<int> result(n);
        for (int i = 0; i < n; ++i) {
            result[i] = nums[(i + nums[i] % n + n) % n];
        }
        return result;
    }
};