class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int total = 0;
        
        while (!piles.empty()) {
            piles.pop_back(); 
            total += piles.back(); 
            piles.pop_back();
            piles.erase(piles.begin()); 
        }
        
        return total;
    }
};