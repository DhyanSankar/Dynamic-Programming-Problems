//https://leetcode.com/problems/array-partition-i/
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.begin() + nums.size());
        int minimum = INT_MAX;
        int temp;
        for(int i = 0; i < (nums.size())/2; i++){
            temp = nums[i] + nums[nums.size() - i];
            minimum = min(minimum, temp);
        }
        return minimum;
    }
};