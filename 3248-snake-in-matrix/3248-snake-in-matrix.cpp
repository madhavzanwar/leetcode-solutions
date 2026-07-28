class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        int x = 0;
        int y = 0;
        int m = commands.size();
        for(int i =0 ;i<m;i++){
            string s = commands[i];
            if(s=="UP") y--;
            else if(s=="DOWN") y++;
            else if(s=="RIGHT") x++;
            else x--;
        }
        return (y * n) + x; 
   
    
        
        
    }
};