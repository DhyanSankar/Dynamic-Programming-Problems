//https://leetcode.com/problems/word-break/submissions/
class Solution {
public:
    unordered_map<string,int> dp;
    bool wordBreak(string s, vector<string>& wordDict) {
        if(s.length() == 0)
           return true;
        if(dp[s] == 1)
            return 1;
        if(dp[s] == -1)
            return false;
        string ss = "";
        for(int i = 0; i < s.length(); i++)
        { 
            ss = ss + s[i];
            for(int j = 0; j < wordDict.size(); j++)
            {
                if(wordDict[j].compare(ss) == 0&&wordBreak(s.substr(i + 1), wordDict))
                {
                    return dp[ss]=1;
                }
            }
        }
        dp[s]=-1;
        return false;
    }
};