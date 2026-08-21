class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        vector<int>temp;
        for(int i=0;i<nums.size();i++){
            while(i+1<nums.size()&&nums[i+1]==nums[i]+1){
                temp.push_back(nums[i]);
                i++;
            }
            temp.push_back(nums[i]);

            if(temp.size()==1){
                ans.push_back(to_string(temp[0]));
                temp.clear();
            }
            else{
                ans.push_back(to_string(*min_element(temp.begin(), temp.end())) + "->" + to_string(*max_element(temp.begin(), temp.end())));
                temp.clear();
            }
        }
        return ans;    
    }
};