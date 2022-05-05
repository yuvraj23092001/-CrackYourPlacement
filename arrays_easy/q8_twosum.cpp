// brute force approach - sort the array and two pointer 
// optimised approach - use the unordered map to store the occurances of the array and calculate the array based on that 
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // to store the solution of the index
        unordered_map<int,int> index;        
    
         for(int i=0;i<nums.size();i++){
             // seeing if the other number already exists in heap and if yes then returning it
            if(index.find(target-nums[i])!=index.end()){
                return {index[target-nums[i]],i};
             }
             // if doesnot exist add to the heap and move forward
             index[nums[i]]=i;
         }
        // since no solution is found so we have to return  empty 
        return {};
    }
};