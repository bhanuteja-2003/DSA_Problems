class Solution {
public:
    int solve(int i, int j,int base,vector<vector<int>>& triangle ,vector<vector<int>>& dp ){
        if(i==base){
            return dp[i][j] = triangle[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int down = solve(i+1, j, base, triangle,dp);
        int dia = solve(i+1, j+1, base, triangle,dp);
        return dp[i][j]= triangle[i][j] + min(down, dia);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int row=triangle.size();
        int col = triangle[row-1].size();
        vector<vector<int>> dp(row, vector<int>(col,-1));
        
        return solve(0,0,row-1,triangle, dp);
        
    }
};