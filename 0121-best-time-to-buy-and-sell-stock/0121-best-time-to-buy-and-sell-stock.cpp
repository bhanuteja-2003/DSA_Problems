class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if(n==1){
            return 0;
        }
        int maxprofit = 0;
        int buy = 0 ;
        int sell = 1;
        while(sell < n){
            int profit = prices[sell]-prices[buy];
            if(profit >=0 ){
                maxprofit = max(maxprofit, profit);
            }
            else{
                buy=sell;
            }
            sell++;
        }
        return maxprofit;
        
    }
};