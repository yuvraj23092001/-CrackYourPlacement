// approach is to iterate backwards and keep track of the minimum jump length required at a position.
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size() - 1;     
        for(int i = n; i >= 0; i--){
            if(i + nums[i] >= n)
                n = i;
        }
        
        return n == 0;
    }
};