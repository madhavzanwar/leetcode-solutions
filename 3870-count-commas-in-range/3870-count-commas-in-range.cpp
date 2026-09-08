class Solution {
public:
    int countCommas(int n) {
        string s = to_string(n);
        int p = 0;
        int len = s.size();
        if(s.size() < 4) return 0;
        while(len>3){
            len -= 3; 
            p++;
        }
        if(p>0){
            return (n-999)*p;
        }
        else{
            return 0;
        }
    }
};