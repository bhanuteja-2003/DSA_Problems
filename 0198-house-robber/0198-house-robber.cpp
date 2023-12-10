class Solution {
public:
    int solve(int ind , vector<int>& nums ,int n ,vector<int> &dp){
        if(ind==n){
            return dp[ind] = nums[ind];
        }    
        if(ind>n){
            return 0;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int pick = nums[ind]  + solve(ind+2 , nums , n , dp);
        int no_pick = 0  + solve(ind+1 , nums , n , dp);
        return dp[ind] = max(pick ,no_pick);
    }
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() ,-1);
        return solve(0, nums, nums.size()-1,dp);
        
    }
};