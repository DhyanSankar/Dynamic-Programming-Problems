//https://leetcode.com/problems/intersection-of-two-arrays/submissions/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int, greater<int>> s1;
        for(int i = 0; i < nums1.size(); i++){
            if(isIn(nums1[i], nums2)){
                s1.insert(nums1[i]);
            }
        }
        vector<int> output;
        for(auto num : s1){
            output.push_back(num);
        }
        return output;
    }
    bool isIn(int n, vector<int> nums){
        if (find(nums.begin(), nums.end(), n) != nums.end()) {
            return true;
        }
        return false;
    }
};