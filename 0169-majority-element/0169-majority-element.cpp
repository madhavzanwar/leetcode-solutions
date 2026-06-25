class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // BY MOORE'S VOTING ALGO
        int cnt = 0;
        int el;
        for(int i=0; i<nums.size(); i++){
            if(cnt==0){
                cnt = 1;
                el = nums[i];
            }
            else if(nums[i]==el){
                cnt ++;
            }
            else{
                cnt --;
            }
            // we assume that majority element always exists in the array
        }
        return el;
    }
};