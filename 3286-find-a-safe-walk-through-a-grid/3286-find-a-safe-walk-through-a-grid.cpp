class Solution {
public:
    int m, n;
    vector<vector<int>> best;
    int dir[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};

    bool dfs(vector<vector<int>>& grid, int i, int j, int health){
        if(health <= 0) return false;
        if(i == m-1 && j == n-1) return true;

        if(best[i][j] >= health) return false;
        best[i][j] = health;

        for(int k = 0; k < 4; k++){
            int ni = i + dir[k][0];
            int nj = j + dir[k][1];

            if(ni>=0 && ni<m && nj>=0 && nj<n){
                int newHealth = health - grid[ni][nj];
                if(dfs(grid, ni, nj, newHealth))
                    return true;
            }
        }

        return false;
    }

    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        m = grid.size();
        n = grid[0].size();

        best.assign(m, vector<int>(n, -1));

        health -= grid[0][0];

        return dfs(grid, 0, 0, health);
    }
};