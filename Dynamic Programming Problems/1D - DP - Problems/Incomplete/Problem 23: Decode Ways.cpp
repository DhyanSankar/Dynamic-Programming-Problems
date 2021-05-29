//https://leetcode.com/problems/decode-ways/submissions/
class Solution {
public:
    int numDecodings(string s) {
        int length = s.size();
        if(length == 1){
            if(s[0] != '0'){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(length == 0){
            return 0;
        }
        string two = s.substr(0, 2);
        int num = stoi(two);
        if(num > 0 && num < 27){
            return numDecodings(s.substr(3, length - 2)) + numDecodings(s.substr(2, length - 1));
        }
        else{
            return numDecodings(s.substr(2, length - 1));
        }
    }
};