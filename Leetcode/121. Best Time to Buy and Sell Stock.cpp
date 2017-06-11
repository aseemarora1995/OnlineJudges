class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.empty()) return 0;
        int profit = 0, mini = prices[0];
        for(int i=1; i<prices.size(); i++){
            if(prices[i] < mini) mini = prices[i];
            profit = max(profit, prices[i]-mini);
        }
        return profit;
    }
};
