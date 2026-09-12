class Solution {
public:
    bool isSameAfterReversals(int num) {
        string s =to_string(num);
        if(s.size()==1) return true;
        if(num%10==0){
            return false;
        }
        return true;
    }
};