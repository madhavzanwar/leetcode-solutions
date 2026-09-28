class Solution {
public:
    int maxDepth(string s) {
        int counter = 0, max_counter=0;
        for(char ch : s){
            if(ch=='(') counter++;
            else if(ch==')')counter--;
            if(counter>max_counter) max_counter = counter;
        }
        return max(counter,max_counter);
    }
};