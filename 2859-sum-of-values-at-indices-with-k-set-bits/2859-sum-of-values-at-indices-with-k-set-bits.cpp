class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (bitset<16>(i).count() == k) {
                sum += nums[i];
            }
        }

        return sum;
    }
    //__builtin_popcount(x) directly returns the number of set bits in x.
};