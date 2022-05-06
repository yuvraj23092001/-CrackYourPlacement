// base approach - we can start the area by using double loop and finding maximum from the all combination
// optimised approach - we can use two pointers and solve the given problem
class Solution {
public:
    int maxArea(vector<int>& height) {
        // two pointer approach
        int n = height.size();
        int low = 0;
        int high = n - 1;
        int res = 0;
        while(low <= high){
            int area = min(height[low] , height[high]) * (high - low);
            res = max(area , res);
            if(height[low] < height[high])
                low++;
            else
                high--;
        }
        return res;
    }
};