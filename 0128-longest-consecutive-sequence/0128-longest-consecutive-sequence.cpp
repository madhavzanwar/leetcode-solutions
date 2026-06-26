class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //use unordered SET for optimal solution
        int n = nums.size();
        int longest = 1;
        unordered_set<int>st; //creating set
        if(n == 0) return 0; //for empty case
        for(int i = 0; i<n; i++){
            st.insert(nums[i]); //putting elements into the set
        }
        for(auto it: st){ //iterating into the set
            if(st.find(it-1) == st.end()){
                int cnt = 1;
                int x = it;
                while(st.find(x+1) != st.end()){
                    x += 1;
                    cnt += 1;
                }
                longest = max(longest, cnt);
            }
        }
        return longest;

        
    }
};