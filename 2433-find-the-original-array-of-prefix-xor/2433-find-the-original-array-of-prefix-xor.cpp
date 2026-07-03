class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int xr = 0;
        for(int i = 0; i<pref.size(); i++){
            pref[i] = xr^pref[i];
            xr = xr ^ pref[i];
        }
        return pref;

        
    }
};