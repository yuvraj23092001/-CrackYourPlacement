// Problem link - https://leetcode.com/problems/find-the-duplicate-number/
// brute force approach - sort the array and when adjecent elements are same then return 
// optimised approach -  first we iterate over the array and make each value negetive and if we get negetive value for particular index that means we are accesing it second time 
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        for(int i = 0 ; i < nums.size() ; i++){
            int index = abs(nums[i]) - 1;
            
            if(nums[index] < 0){
                return abs(nums[i]);
            }
            nums[index] = - nums[index];
        }
        return -1;
    }
};
