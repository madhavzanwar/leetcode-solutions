class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;

        for (int i = 0; i < words.size(); i++) {
            //str.compare(startIndex, length, otherString)
            if (words[i].compare(0, pref.size(), pref) == 0) {
                cnt++;
            }
        }
        return cnt;
    }
};