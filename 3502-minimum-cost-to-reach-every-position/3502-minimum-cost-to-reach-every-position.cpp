class Solution {
public:
    vector<int> minCosts(vector<int>& cost) {
        vector<int>ans;
        int small = cost[0];
        ans.push_back(cost[0]);
        
        for(int i=1;i<cost.size();i++){   
            if(cost[i]<small){
                small=cost[i];
                ans.push_back(small);
            }
            else ans.push_back(small);   
        }
        return ans; 
    }
};