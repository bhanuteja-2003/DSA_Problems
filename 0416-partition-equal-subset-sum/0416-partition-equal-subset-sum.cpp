class Solution {
public:
    // this is the recursion code : 
    bool solve(vector<int>& num  ,int rem ,int ind, vector<vector<bool>>& dp){
        // cout << rem;
        // base condition :
        if(rem==0){
            return dp[ind][rem]=true;
        }
        if(ind==num.size()-1){
            return dp[ind][rem]=num[ind]==rem;
        }
        

        // pick it : 
        bool pick = false;
        bool no_pick = false;
        if(num[ind] <= rem){
             pick = solve(num , rem-num[ind] ,ind+1, dp);
        }
        if(!pick)
         no_pick = solve(num, rem, ind+1, dp);

        return dp[ind][rem] = pick || no_pick;
    }
    bool canPartition(vector<int>& nums) {
        int sum =0;
        int n= nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2){
            return false;
        }
        int rem = sum/2;

        vector<vector<bool>> dp(n, vector<bool>(rem+1, false));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        if(nums[n-1]==rem){
            dp[n-1][rem]=true;
        }
        
        
        for(int i=n-2;i>=0 ;i--){
            for(int j=1;j<=rem;j++){
                bool pick =false;
                bool no_pick=false;
                //num[ind] <= rem
                no_pick = dp[i+1][j];
                if(nums[i] <= j){
                    pick = dp[i+1][j-nums[i]];
                }
            dp[i][j] = no_pick || pick;
            }
        }
        return dp[0][rem];
        
    }
};