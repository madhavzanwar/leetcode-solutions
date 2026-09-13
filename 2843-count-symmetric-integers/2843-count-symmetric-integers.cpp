class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int ans = 0;

        for (int num = low; num <= high; num++) {
            string s = to_string(num);
            int n = s.size();

            if (n % 2 != 0) continue;  

            int leftSum = 0, rightSum = 0;

           
            for (int i = 0; i < n / 2; i++) {
                leftSum += (s[i] - '0');  
            }

           
            for (int i = n / 2; i < n; i++) {
                rightSum += (s[i] - '0');
            }

            if (leftSum == rightSum) {
                ans++;   
            }
        }

        return ans;
    }
};