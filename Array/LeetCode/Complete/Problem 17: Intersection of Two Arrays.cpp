//https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        for(auto& num : nums1){
            mp[num]++;
        }
        nums1.clear();
        for(auto& num : nums2){
            if (mp.find(num) != mp.end() and mp[num]-- > 0){
                nums1.push_back(num);
            }
        }
        return nums1;
    }
};