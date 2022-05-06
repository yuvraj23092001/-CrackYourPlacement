// brute force approach - simple approach would be to use three loops and find the numbers which are equal to k 
// optimised approach - use one loop and use two pointers 
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int N = nums.size();
        vector<vector<int>> ans;
        
        for(int left = 0; left <= N-3; left++){
            //in this case, nums[left]'s role is already played by nums[left-1]
            //, so we will only get duplicate combinations
            if(left > 0 && nums[left] == nums[left-1]) continue;
            int mid = left+1, right = N-1;
            while(mid < right){
                if(nums[left] + nums[mid] + nums[right] == 0){
                    ans.push_back({nums[left], nums[mid], nums[right]});
                    //find a mid s.t. nums[mid+1] != current nums[mid]
                    while(mid < right && nums[mid] == nums[mid+1]) mid++;
                    while(mid < right && nums[right] == nums[right-1]) right--;
                    //switch to mid+1(nums[mid+1] != current nums[mid])
                    mid++; right--;
                }else if(nums[left] + nums[mid] + nums[right] < 0){
                    mid++;
                }else{
                    right--;
                }
            }
        }
        
        return ans;
    }
};