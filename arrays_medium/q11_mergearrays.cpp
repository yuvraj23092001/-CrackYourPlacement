// brute force approach - would be to copy the nums2 array first and sort the array nlogn
// optimised approach - since we now the array is increasingly sorted so we will start from end of the array and assign larger of both values and return n

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int p = m+n-1;
        int p1 = m-1;
        int p2 = n-1;
        while (p >= 0 && p1>= 0 && p2 >= 0){
            if (nums1[p1] <= nums2[p2]){
                nums1[p--] = nums2[p2--];
            }
            else{
                nums1[p--] = nums1[p1--];
            }
        }
        while (p2 >= 0){
            nums1[p--] = nums2[p2--];
        }
    }
};
