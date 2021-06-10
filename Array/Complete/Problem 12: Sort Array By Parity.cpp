//https://leetcode.com/problems/sort-array-by-parity/submissions/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> even;
        vector<int> odd;
        for(int i : nums){
            if(i % 2 == 0){
                even.push_back(i);
            }
            else{
                odd.push_back(i);
            }
        }
        sort(even.begin(), even.end());
        sort(odd.begin(), odd.end());
        for(int i : odd){
            even.push_back(i);
        }
        return even;
    }
};