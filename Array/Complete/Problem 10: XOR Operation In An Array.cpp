//https://leetcode.com/problems/xor-operation-in-an-array/
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums;
        for(int i = 0; i < n; i++){
            nums.push_back(2 * i + start);
        }
        int temp = nums[0];
        for(int i = 1; i < n; i++){
            temp = temp ^ nums[i];
        }
        return temp;
    }
};