class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
            int profit=prices[i]-buy;
            maxprofit=max(maxprofit,profit);
            buy=min(buy,prices[i]);
        }
        return maxprofit;
        
    }
};