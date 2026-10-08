class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26], maxvol = 0, maxconso=0;
        for(char c : s){
            int i = c - 'a';
            freq[i]++;
            if(c == 'a' || c=='e'||c=='i'||c=='o'||c=='u'){
                maxvol = max(freq[i], maxvol);
            }
            else{
                maxconso = max(freq[i], maxconso);
            }
        }
        return maxvol+maxconso;
    }
};