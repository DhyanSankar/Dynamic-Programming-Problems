//https://leetcode.com/problems/monotonic-array/
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool one = true;
        bool two = true;
        int length = nums.size();
        for(int i = 0; i < length - 1; i++){
            if(nums[i] > nums[i + 1]){
                one = false;
            }
            else if(nums[i] < nums[i + 1]){
                two = false;
            }
        }
        return one || two;
    }
};