// brute force approach - four loops
// optimised approach - two nested loops and two pointers
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>> ans;
         // we will use two for loops and two pointer approach to find the solution and first sort the array
         if(nums.size() < 4) return ans;
         sort(nums.begin(),nums.end());
         for(int i=0;i<nums.size()-3;i++){
             if(i > 0 && nums[i] == nums[i-1])
                continue;
             for(int j=i+1;j<nums.size()-2;j++){
                 // since we have to check for duplicates 
                 if(j>i+1 and nums[j]==nums[j-1]){
                     continue;
                 }
                 int targetrem = target -nums[i]-nums[j];
                 int start = j+1;
                 int end = nums.size()-1;
                 
                 while(start<end){
                     if(nums[start]+nums[end]<targetrem){
                         start++;
                     }
                     else if(nums[start]+nums[end]>targetrem){
                         end--;
                     }
                     else if(nums[start]+nums[end] == targetrem){
                         vector<int>v(4,0);
                         v[0]=nums[i];
                         v[1]=nums[j];
                         v[2]=nums[start];
                         v[3]=nums[end];
                         ans.push_back(v);
                         while(start<end && nums[start]==nums[start+1]){
                             start++;
                         }
                         while(start< end && nums[end-1]==nums[end]){
                             end--;
                         }
                         start++;
                         end--;
                         
                     }
                 }
                 
             }
         }
        return ans;
    }
};