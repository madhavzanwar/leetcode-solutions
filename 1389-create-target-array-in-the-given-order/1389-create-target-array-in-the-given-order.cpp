class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>target;
        for(int i = 0; i<nums.size(); i++){
            // Common usage with index:
            //target.insert(target.begin() + pos, nums[i]);
            target.insert(target.begin()+index[i], nums[i]); //imp
        }
        return target;
    }
};