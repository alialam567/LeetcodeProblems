class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int trough = 0;

        for (int i = 0; i < prices.size(); i++){
            if ((prices[i] - prices[trough]) > profit) {
                profit = (prices[i] - prices[trough]);
            }
            if (prices[i] < prices[trough]){
                trough = i;
            }
        }

        return profit;
    }
};