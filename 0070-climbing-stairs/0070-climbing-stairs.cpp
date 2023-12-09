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
        dp[n]=1;
        dp[n-1]=1;
        for(int i=n-2;i>=0;i--){
            dp[i]=dp[i+1] +dp[i+2];
        }
    return dp[0];
        
    }
};