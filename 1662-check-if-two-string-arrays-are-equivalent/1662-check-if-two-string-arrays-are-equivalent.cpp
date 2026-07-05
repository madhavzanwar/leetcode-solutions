class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string demo1;
        string demo2;
        for(int a = 0; a < word1.size(); a++){
            demo1 += word1[a];
        }
        for(int a = 0; a < word2.size(); a++){
            demo2 += word2[a];
        }
        
        return demo1 == demo2;
    }
};