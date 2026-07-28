class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();

        string half = s.substr(0, n / 2);
        sort(half.begin(), half.end());

        string res = half;

        // Agar length odd hai to middle character add karo
        if (n % 2 == 1) {
            res += s[n / 2];
        }

        // Reverse half add karo
        string rev = half;
        reverse(rev.begin(), rev.end());
        res += rev;

        return res;
    }
};