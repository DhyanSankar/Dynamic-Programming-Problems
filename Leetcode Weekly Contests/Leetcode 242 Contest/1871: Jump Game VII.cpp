//https://leetcode.com/problems/jump-game-vii/submissions/
//https://embeddedbits.org/finding-memory-bugs-with-addresssanitizer/
class Solution {
public:
    bool canReach(string s, int minJump, int maxJump) {
        if(s.size() == 1){
            return true;
        }
        vector<int> vect;
        if(s.length() > maxJump){
            for(int i = maxJump; i >= minJump; i--){
                if(s[i] == '0'){
                    string sub = s;
                    sub.erase(0, i);
                    bool var = canReach(sub, minJump, maxJump);
                    if(var == true){
                        return true;
                    }
                }
            }
            return false;
        }
        else{
            for(int i = s.length(); i >= minJump; i--){
                if(s[i] == '0'){
                    string sub = s;
                    sub.erase(0, i);
                    bool var = canReach(sub, minJump, maxJump);
                    if(var == true){
                        return true;
                    }
                }
            }
            return false;
        }
    }
};