//https://leetcode.com/problems/array-partition-i/
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int n=nums.size(),ans=0;
        sort(nums.begin(),nums.end());
        for(int i=n-2;i>=0;i-=2)    ans+=nums[i];
        return ans;
    }
};