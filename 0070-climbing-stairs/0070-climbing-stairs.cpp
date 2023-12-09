class Solution {
public:
            int solve(int i, int n, vector<int> &dp){
    if(i==n||i==n-1){
        dp[i]=1;
        return dp[i];
    }
    if(dp[i]!=-1){
        return dp[i];
    }
    return dp[i]=solve(i+1,n, dp) +solve(i+2,n,dp);

}
    int climbStairs(int n) {
        
        


    //  Write your code here.
    vector<int> dp(n+1 ,-1);
    return solve(0, n , dp);
        
    }
};