class Solution {
public:
    int minOperations(vector<int>& nums) {
        int cnt = 0;
        if(nums.size()<2) return 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>=nums[i+1]){
                int target = nums[i]+1;
                cnt+=(target-nums[i+1]);
                nums[i+1]=target;
            }
        }
        return cnt;
    }
};