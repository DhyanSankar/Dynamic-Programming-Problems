//https://leetcode.com/problems/valid-mountain-array/
class Solution {
public:
    bool isI(vector<int>& arr, int i){
        bool isTrue = true;
        for(int j = 1; j <=i; j++){
            if(arr[j - 1] >= arr[j]){
                isTrue = false;
            }
        }
        for(int j = i + 1; j < arr.size() - 1; j++){
            if(arr[j - 1] <= arr[j]){
                isTrue = false;
            }
        }
        return isTrue;
    }
    bool validMountainArray(vector<int>& arr) {
        if(arr.size() >= 3){
            for(int i = 0; i < arr.size() - 1; i++){
                if(isI(arr, i) == true){
                    return true;
                }
            }
        }
        return false;
    }
};