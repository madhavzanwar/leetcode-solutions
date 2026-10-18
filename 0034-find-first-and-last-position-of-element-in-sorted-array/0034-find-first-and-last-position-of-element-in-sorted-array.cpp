class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //lower_bound() in C++ finds the first position where a value can be inserted without breaking sorted order.
        int startingPosition = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int endingPosition = lower_bound(nums.begin(), nums.end(), target+1) - nums.begin() - 1;
        if(startingPosition < nums.size() && nums[startingPosition] == target){
            return {startingPosition, endingPosition};
        }
        return {-1, -1};
    }
};