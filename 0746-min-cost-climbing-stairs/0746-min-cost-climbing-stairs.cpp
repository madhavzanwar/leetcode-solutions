class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int x = 0, y=0;
        for(int i =2;i<=n;i++){
            int temp = min(x+cost[i-2], y+cost[i-1]);
            x=y;
            y=temp;
        }
        return y;   
    }
};