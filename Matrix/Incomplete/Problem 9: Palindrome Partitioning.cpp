//https://leetcode.com/problems/palindrome-partitioning/
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> vect;
        vector<vector<string>> temp;
        vector<string> temptemp;
        temp.push_back(temptemp);
        temp[0].push_back(s[0]);
        vect = temp;
        for(int i = 0; i < s.size() - 1; i++){
            for(int j = 0; j < temp.size(); j++){
                //vect.push_back(temp[j].push_back(s[i]));
                //vect.push_back()
            }
        }
    }
};