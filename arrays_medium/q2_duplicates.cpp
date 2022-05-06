// base approach would be to sort the array and return elements for which arr[i] == arr[i-1]
// second approach would be to create a hashmap and return for elements with two occurances
// third approach since we are given that the numbers can occur only as one or two times
// first time we assign negetive and if we reach same index and is negetive that means it is the second time we are visiting the index so add to the answer 
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> result; 
        for(int n: nums){
            n = abs(n);
            if(nums[n-1] > 0)
            {
                nums[n-1]*= -1;
            }
            else
            {
                result.push_back(n);
            }
        }
        return result;
    }
};