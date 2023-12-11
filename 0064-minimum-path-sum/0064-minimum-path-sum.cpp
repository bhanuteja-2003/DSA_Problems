class Solution {
public:
    int solve(int i,int j, vector<vector<int>> &grid,vector<vector<int>> &dp){
        //base case :
        if(i==0 && j==0){
            return dp[i][j] = grid[i][j];
        }
        if(i<0 || j < 0){
            return 1e7;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int up = solve(i-1,j,grid,dp);
        int left = solve(i,j-1,grid,dp);
        return dp[i][j] = grid[i][j] + min(up,left);
    }
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int col = grid[0].size();
        vector<vector<int>> dp(row,vector<int>(col,-1));
        return solve(row-1, col-1,grid,dp);
        
    }
};