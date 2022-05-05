// approach - we use two pointers to keep the track of duplicates and non-duplicates. we increment j if not duplicate number and put value in j index else continue
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j =1; 
        int count = 1;
        for(int i =1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            else{
                nums[j] = nums[i];
                j++;
                count++;
            }
        }
        return count;
    }
};