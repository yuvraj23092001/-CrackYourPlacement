
class Solution {
public:
    int findMaxValueOfEquation(vector<vector<int>>& nums, int k) {
       // since we have to return the max such that basic approach would be to iterate for two loops 
       // optimised approach - we a approach similar
        priority_queue<pair<int,int>> p;
        int ans = INT_MIN;
        for(int i=0;i<nums.size();i++){
            while(!p.empty() && (nums[i][0]-p.top().second>k)) p.pop();
            if(!p.empty()){
                ans = max(ans,nums[i][0]+nums[i][1]+p.top().first);
            }
            p.push({nums[i][1]-nums[i][0],nums[i][0]});
        }
        return ans;
    }
};