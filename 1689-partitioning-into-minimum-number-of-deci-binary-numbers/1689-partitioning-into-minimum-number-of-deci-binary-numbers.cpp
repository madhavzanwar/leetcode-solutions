class Solution {
public:
    int minPartitions(string n) {
        //largest digit is the answer here
        int max_digit = 0;
        for(char x : n){
            int digit = x - '0'; //ascii
            if(digit>max_digit) max_digit=digit;
        }
        return max_digit;  
    }
};