class Solution {
public:
    string clearDigits(string s) {
        string clear = "";
        for(int i=0; i<s.size(); i++){
            if(clear.size() != 0 && (s[i] >= 48 && s[i] <= 57)){
                clear.pop_back();
            }
            else clear.push_back(s[i]);
        }
        return clear;
    }
};