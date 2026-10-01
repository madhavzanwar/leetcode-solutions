class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2){
            string newy = "";
            for(int i=0;i<s.size()-1;i++){
                int digit=((s[i] - '0')+(s[i+1]-'0'))%10;
                newy += digit -'0';
            }
            s=newy;
        }
        if(s[0]==s[1]) return true;
        else return false;

    }
};