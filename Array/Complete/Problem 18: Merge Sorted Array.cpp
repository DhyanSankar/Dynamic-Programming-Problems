//https://leetcode.com/problems/merge-sorted-array/submissions/
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> temp(m + n, 0);
        int a = 0, b = 0, c = 0;
        while(a < m && b < n){
            if(nums1[a] < nums2[b]){
                temp[c++] = nums1[a++];
            }
            else{
                temp[c++] = nums2[b++];
            }
        }
        while (a < m){
            temp[c++] = nums1[a++];
        }
        while (b < n){
            temp[c++] = nums2[b++];
        }
        nums1 = temp;
    }
};