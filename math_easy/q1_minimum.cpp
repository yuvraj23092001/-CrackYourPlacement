// logic - if we observe in each step we are increasing the n-1 elements by 1 same as decreasing max by one 
// we have to do this for each element so answer = value of element - minimum element value
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int answer = 0;
        if(nums.size()<2){
            return answer;
        }
        int minelement = INT_MAX; // stores the minimum element in array 
        for(auto a:nums){
            minelement = min(minelement,a);
        }
        for(auto a: nums){
            answer += a - minelement;
        }
        return answer;
        
    }
};