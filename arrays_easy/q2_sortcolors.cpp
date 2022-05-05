// this is variation of dutch flag problem 
// brute force approach - use of sorting and then two pointers 
// optimised approach - use three pointers and swap the values of the elements based on the conditions
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int start = 0;
        int mid = 0;
        int end = size - 1;
        while(mid<=end){
            if(nums[mid]==0){
                swap(nums[start],nums[mid]);
                mid++;
                start++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[end]);
                end--;
            }
        }
    }
};