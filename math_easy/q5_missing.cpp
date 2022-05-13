class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        int rsum = 0;
        
        for(int i=0; i<nums.size(); i++){
            sum+=i;
            rsum+=nums[i];
            
        }
        sum+=nums.size();
        
        return sum - rsum;
    }
};