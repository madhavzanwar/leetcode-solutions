class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int ind = -1;
        int n = nums.size();
        
        // 1. Find the first decreasing element from the right
        for(int i = n-2; i >= 0; i--){
            if(nums[i] < nums[i+1]){
                ind = i;
                break;
            }
        }
        
        // 2. If no such element, reverse the entire array
        if(ind == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        
        // 3. Find the element just larger than nums[ind] from the right
        for(int i = n-1; i > ind; i--){
            if(nums[i] > nums[ind]){
                swap(nums[i], nums[ind]);
                break;
            }
        }
        
        // 4. Reverse the suffix to get the smallest permutation
        reverse(nums.begin()+ind+1, nums.end());   
    }
};