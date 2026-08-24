class Solution {
public:
    int nearestDrone(vector<vector<int>>& drones, vector<int>& target) {
        vector<int>ams;
        int maxi = INT_MAX;
        for(int i =0; i<drones.size();i++){
            int distance = abs(drones[i][0]-target[0])+abs(drones[i][1]-target[1]);
            if(distance<=drones[i][2]&&distance<maxi){
                ams.push_back(i);
                maxi=distance;
            }  
        }
        if (ams.size() == 0) return -1;
        else return ams[ams.size() - 1];
    }
};