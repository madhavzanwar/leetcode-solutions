class Solution {
public:
    int maxProduct(int n) {
        vector<int>digits;
        int result = 1;
        while (n > 0) {
            digits.push_back(n% 10); // Extract last digit
            n /= 10;                  // Remove last digit
        }
        sort(digits.rbegin(), digits.rend());
        for(int i = 0;i<digits.size();i++){
            result = digits[0]*digits[1];
        }
        return result;

        
    }
};