//https://leetcode.com/problems/stone-game-viii/submissions/
class Solution {
public:
    int stoneGameVIII(vector<int>& stones) {
        int Alice = 0;
        int Bob = 0;
        int arr[2];
        int counter = 0;
        int maxsum;
        int maxindex;
        while(stones.size() > 1){
            if(counter % 2 == 0){
                optimal(stones, arr);
                maxsum = arr[0];
                maxindex = arr[1];
                Alice += maxsum;
                stones.erase(stones.begin(), stones.begin() + maxindex);
            }
            else{
                optimal(stones, arr);
                maxsum = arr[0];
                maxindex = arr[1];
                Bob += maxsum;
                stones.erase(stones.begin(), stones.begin() + maxindex);
            }
            counter++;
        }
        return Alice - Bob;
    }
    void optimal(vector<int> stones, int arr[]){
        int sum = 0;
        int maxsum = 0;
        int maxindex = 0;
        for(int i = 0; i < stones.size(); i++){
            sum += stones[i];
            if(sum >= maxsum){
                maxsum = sum;
                maxindex = i;
            }
        }
        arr[0] = maxsum;
        arr[1] = maxindex;
    }
};