//https://leetcode.com/problems/longer-contiguous-segments-of-ones-than-zeros/

class Solution {
public:
    bool checkZeroOnes(string s) {
        int z=find(s,'0');
        int o=find(s,'1');
        if (o>z)
            return true;
        else
            return false;
    }
        
    int find(string s,char d){
        int count=0;
        int v=0;
        int m=0;
        for(int i=0;i<s.size();i++)
        {
            if (s[i]==d)
            {
                v+=1;
                if (m<v)
                    m=v;
            }
            else
                v=0;
            }
        return m;}
};