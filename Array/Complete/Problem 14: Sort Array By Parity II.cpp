//https://leetcode.com/problems/sort-array-by-parity-ii/submissions/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even, odd, result;
        for(int i : nums){
            if(i % 2 == 0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        for(int i = 0; i < nums.size()/2; i++){
            result.push_back(even[i]);
            result.push_back(odd[i]);
        }
        return result;
    }
};