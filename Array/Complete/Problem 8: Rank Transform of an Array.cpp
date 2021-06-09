//https://leetcode.com/problems/rank-transform-of-an-array/
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int> mp;
        for(int x : arr){
            mp[x] = 0;
        }
        int pos = 1;
        for(pair<int,int> p : mp){
            mp[p.first] = pos++;
        }
        for(int i=0; i<arr.size(); i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};