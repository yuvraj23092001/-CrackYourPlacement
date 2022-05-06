// brute force approach - sort the arrays and count the occurances of the number
// optimised approach - use a map
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // create a map and return the number whose occurance is more than num/2
        map<int,int> mp;
        int n =nums.size();
        for(auto it:nums){
            mp[it]++;
        }
        for(int i=0;i<n;i++){
            if(mp[i]>=n/2){
                return i+1;
            }
        }
        return 0;
    }
};