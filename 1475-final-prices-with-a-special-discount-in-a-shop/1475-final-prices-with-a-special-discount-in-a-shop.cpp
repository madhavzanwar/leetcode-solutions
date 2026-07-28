class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int>temp = prices;
        for(int i=0; i<prices.size(); i++){
            for(int j=i+1; j<prices.size(); j++){
                if(prices[j] <=temp[i]){
                    temp[i]-=prices[j]; 
                    break;
                }
            }
        }
        return temp;
    }
};