// approach - keep track of zero value and when found swap
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // if the curent element is zero check if the next element is zero or a number if a number then move it back else search for number at new place 
    int index = 0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]==0)
        {
            continue;
        }
        else
        {
            if(index!=i)
            {
                nums[index] = nums[i];
                nums[i]=0;
            }
                index++;
        }
                   
    }}
};