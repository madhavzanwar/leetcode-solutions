class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>result;
        for(int i = 0; i<nums.size()-1; i++){
            while(nums[i]+1 <  nums[i+1]){
                nums[i]++;
                result.push_back(nums[i]);
            }

        }
        return result;
    }
};