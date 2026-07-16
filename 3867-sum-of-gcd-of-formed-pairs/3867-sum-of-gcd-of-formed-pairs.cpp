class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>prefixGcd(nums.size());
        int mx = nums[0];
        for(int i=0; i<prefixGcd.size(); i++){
            mx = max(mx, nums[i]);   // Maximum from nums[0] to nums[i]
            prefixGcd[i] = gcd(nums[i], mx);
        }
        sort(prefixGcd.begin(), prefixGcd.end());

        long long ans = 0;
        int left = 0;
        int right = prefixGcd.size() - 1;

        while(left<right){
            ans+=gcd(prefixGcd[left], prefixGcd[right]);
            left++;
            right--;
        }

        return ans;
        
    }
};