class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int digits = 0;
            while (num > 0) {
                digits += num % 10;
                num /= 10;
            }
            if (digits == i) return i;
        }
        return -1;
    }
};