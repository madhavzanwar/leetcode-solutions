class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<string> output;
        vector<int> sorted = score;

        sort(sorted.begin(), sorted.end(), greater<int>());

        for (int i = 0; i < score.size(); i++) {
            for (int j = 0; j < sorted.size(); j++) {
                if (score[i] == sorted[j]) {
                    if (j == 0) {
                        output.push_back("Gold Medal");
                    }
                    else if (j == 1) {
                        output.push_back("Silver Medal");
                    }
                    else if (j == 2) {
                        output.push_back("Bronze Medal");
                    }
                    else {
                        output.push_back(to_string(j + 1));
                    }
                    break;
                } 
            }
        }

        return output;
    }
};