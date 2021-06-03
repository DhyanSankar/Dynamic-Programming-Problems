//https://leetcode.com/problems/check-if-word-equals-summation-of-two-words/

//redo with seperate function to find values of letters
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int one = 0;
        int two = 0;
        int three = 0;
        string s;
        int val;
        for(int i = 0; i < firstWord.size(); i++){
            s = firstWord[i];
            if(s == 'a'){
                val = 0;
            }
            else if(s == 'b'){
                val = 1;
            }
            else if(s == 'c'){
                val = 2;
            }
            else if(s == 'd'){
                val = 3;
            }
            else if(s == 'e'){
                val = 4;
            }
            else if(s == 'f'){
                val = 5;
            }
            else if(s == 'g'){
                val = 6;
            }
            else if(s == 'h'){
                val = 7;
            }
            else if(s == 'i'){
                val = 8;
            }
            else if(s == 'j'){
                val = 9;
            }
            one = 10 * one + val;
        }
        for(int i = 0; i < secondWord.size(); i++){
            s = secondWord[i];
            if(s == 'a'){
                val = 0;
            }
            else if(s == 'b'){
                val = 1;
            }
            else if(s == 'c'){
                val = 2;
            }
            else if(s == 'd'){
                val = 3;
            }
            else if(s == 'e'){
                val = 4;
            }
            else if(s == 'f'){
                val = 5;
            }
            else if(s == 'g'){
                val = 6;
            }
            else if(s == 'h'){
                val = 7;
            }
            else if(s == 'i'){
                val = 8;
            }
            else if(s == 'j'){
                val = 9;
            }
            two = 10 * two + val;
        }
        for(int i = 0; i < targetWord.size(); i++){
            s = targetWord[i];
            if(s == 'a'){
                val = 0;
            }
            else if(s == 'b'){
                val = 1;
            }
            else if(s == 'c'){
                val = 2;
            }
            else if(s == 'd'){
                val = 3;
            }
            else if(s == 'e'){
                val = 4;
            }
            else if(s == 'f'){
                val = 5;
            }
            else if(s == 'g'){
                val = 6;
            }
            else if(s == 'h'){
                val = 7;
            }
            else if(s == 'i'){
                val = 8;
            }
            else if(s == 'j'){
                val = 9;
            }
            three = 10 * three + val;
        }
        return one + two == three;
    }
};