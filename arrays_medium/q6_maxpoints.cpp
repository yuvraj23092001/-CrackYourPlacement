// base approach would be to create a prefix sum array and find the sum of the array and using the n-k elements sliding window find the max
// improved approach - calculate the sum of first k elements and then subtract k-i-1 and add n-i-1 elements
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n= cardPoints.size();
        int ans=0, sum=0;
        
        for(int i=0; i<k; i++){
            sum += cardPoints[i];
        }
        ans = sum;
        
        for(int i=0; i<k; i++){
            sum -= cardPoints[k-i-1];
            sum += cardPoints[n-i-1];
            ans = max(ans,sum);
        }
        
        return ans;
    }
};