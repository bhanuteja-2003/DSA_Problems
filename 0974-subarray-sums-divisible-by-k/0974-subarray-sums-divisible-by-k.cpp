class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        int sum=0;
        int count=0;
        unordered_map<int ,int> mp;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int rem = sum%k;
            if(rem<0)rem+=k;
            if(rem==0){
                count++;
            }
            if(mp.find(rem)!=mp.end()){
                count+=mp[rem];
            }
            mp[rem]++;
        }
        return count;
        
    }
};