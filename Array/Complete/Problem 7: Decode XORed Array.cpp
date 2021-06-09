//https://leetcode.com/problems/decode-xored-array/submissions/
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> vect;
        vect.push_back(first);
        for(int i = 1; i < encoded.size() + 1; i++){
            vect.push_back(vect[i - 1]^encoded[i - 1]);
        }
        return vect;
    }
};