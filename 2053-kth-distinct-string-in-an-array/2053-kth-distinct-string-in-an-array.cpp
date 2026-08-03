class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>freq;
        vector<string>ans;
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(int i=0;i<arr.size();i++){
            if(freq[arr[i]]==1){
                ans.push_back(arr[i]);
            }
        }
        if(ans.size()<k){
            return "";
        } 
        else{
            return ans[k-1];
        }
         
        
    }
};