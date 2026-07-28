class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int>score;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                score.pop_back();
            }
            else if(operations[i]=="D"){
                int double_score = score.back() * 2;
                score.push_back(double_score);
            }
            else if(operations[i]=="+"){
                int n = score.size();
                int sum_score = score[n - 1] + score[n - 2];
                score.push_back(sum_score);
            }
            else{
                score.push_back(stoi(operations[i]));
            }
        }
        return accumulate(score.begin(), score.end(), 0);       
    }
};