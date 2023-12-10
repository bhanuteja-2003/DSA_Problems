class Solution {
public:
   
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() ,-1);
        int n = nums.size()-1;
        dp[n] = nums[n];
        for(int i=n-1;i>=0;i--){
            int pick,no_pick;
            if(i+2>n){
                pick = nums[i];
                
            }
            else{
                pick = nums[i]+dp[i+2];
                
            }
            no_pick = dp[i+1];
            dp[i]=max(pick , no_pick);
        }
        
        return dp[0];
        
    }
};