class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int r =  gcd(nums[0], nums[nums.size()-1]);
        return r;
        
    }
};