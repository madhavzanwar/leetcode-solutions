class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        string result(s.size(), ' ');

        for(int i = 0; i < s.size(); i++) {
        // Place s[i] at position indices[i] in result
            result[indices[i]] = s[i];
        }
        return result;
        
    }
};