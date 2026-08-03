class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int>xcor;
        int max= 0;
        for(vector<int> point:points){
            xcor.push_back(point[0]);
        }
        sort(xcor.begin(), xcor.end());
        for(int i=0;i<xcor.size()-1;i++){
            if(xcor[i+1]-xcor[i]>max){
                max = xcor[i+1]-xcor[i];
            }
        }
        return max;
        
    }
};