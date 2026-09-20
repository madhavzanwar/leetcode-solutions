class Solution {
public:
    int reverseDegree(string s) {
        int total = 0;
        for (int i = 0; i < s.length(); ++i) {
            char c = s[i];
            int reverse_val = 'z' - c + 1; 
            int position = i + 1;        
            total += reverse_val * position;
        }
        return total;
    }
};
