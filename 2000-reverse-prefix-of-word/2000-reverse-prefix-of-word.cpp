class Solution {
public:
    string reversePrefix(string word, char ch) {
        string rev_string = "";
        string norm_string = "";
        bool found = false;

        for (char c : word) {
            if (!found) {
                rev_string += c;
                if (c == ch) {
                    found = true; 
                }
            } else {
                norm_string += c; 
            }
        }
        if (!found) {
            return word;
        }
        reverse(rev_string.begin(), rev_string.end());

        return rev_string + norm_string;
    }
};
