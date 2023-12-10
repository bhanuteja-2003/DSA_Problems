class Solution {
public:
   
    
    int rob(vector<int>& nums) {
        vector<int> dp(nums.size() ,-1);
        int n = nums.size()-1;
        
        int last = nums[n];
        int sec_last = nums[n];
        for(int i=n-1;i>=0;i--){
            int pick,no_pick;
            if(i+2>n){
                pick = nums[i];
                
            }
            else{
                pick = nums[i]+last;
                
            }
            no_pick = sec_last;
            last=sec_last;
            sec_last = max(pick , no_pick);
            
        }
        
        return sec_last;
        
    }
};