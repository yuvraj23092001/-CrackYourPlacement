// brute force approach would be to try all the combinations and return one with maximum profit
// optimised approach - since it is greedy in approach and we now to maximize the profit we have to buy at lowest and sell at maximum after that.
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX;
        int op = 0;
        int profit = 0;
        for(int i = 0; i < prices.size(); i++){
            if(prices[i] < lowest){
                lowest = prices[i];
            }
            profit = prices[i] - lowest;
            if(op < profit){
                op = profit;
            }
        }
        return op;
    }
};