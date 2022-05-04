// optimised approach can be to buy on the day where the next day value is higher. O(n)

class Solution {
public:
    int maxProfit(vector<int>& nums) {
        // since we can sell on same day and incer no loss so the answer to this problem is to buy when the price is low and sell when it is high
        int profit = 0;
        for(int i=1;i<nums.size();i++){
            //
            if(nums[i]>nums[i-1]){
                profit += nums[i] - nums[i-1];
            }
        }
        return profit;
    }
};