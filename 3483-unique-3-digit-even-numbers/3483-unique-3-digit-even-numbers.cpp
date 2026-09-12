class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        set<int> validNumbers;
        int n = digits.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (j == i) continue;  
                for (int k = 0; k < n; k++) {
                    if (k == i || k == j) continue;  


                    int num = 100*digits[i]+10*digits[j]+digits[k];
                    
                    if(digits[i]==0) continue;
                    
                    if(digits[k] %2 !=0) continue;
                    
                    validNumbers.insert(num);
                }
            }
        }

        return validNumbers.size();
    }
};