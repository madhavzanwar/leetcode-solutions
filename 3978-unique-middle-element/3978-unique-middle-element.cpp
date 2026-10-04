class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int middle = nums[n/2];
        unordered_map<int,int>freq;
        for(int num : nums){
            freq[num]++;
        }
        if(freq[middle]==1) return true;
        else return false;
    }
};