class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>value;
        vector<int>freq;
        vector<int>ans;
        for(int i = 1;i<nums.size();i+=2){
            value.push_back(nums[i]);
        }
        for(int i = 0;i<nums.size();i+=2){
            freq.push_back(nums[i]);
        }
        for(int k = 0; k < value.size(); k++){  
            int d = freq[k]; 
            
            while(d !=0){
                ans.push_back(value[k]);
                d--;
            }
        }
        
        return ans;


        
    }
};