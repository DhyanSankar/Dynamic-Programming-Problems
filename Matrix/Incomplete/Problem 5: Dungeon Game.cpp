//https://leetcode.com/problems/dungeon-game/
class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int rows = dungeon.size();
        int columns = dungeon[0].size();
        int healths[rows][columns];
        if(dungeon[rows - 1][columns - 1] >= 0){
            healths[rows - 1][columns - 1] = 1;
        }
        else{
            healths[rows - 1][columns - 1] = dungeon[rows - 1][columns - 1] + 1;
        }
        for(int i = rows - 1; i >= 0; i--){
            healths[i][0] = healths[i + 1][0]  - dungeon[i][0];
        }
        for(int j = columns - 1; j >= 0; j--){
            healths[0][j] = healths[0][j + 1]  - dungeon[0][j];
        }
        for(int i = rows - 1; i >= 0; i--){
            for(int j = columns - 1; j >= 0; j--){
                healths[i][j] = min(healths[i][j + 1], healths[i + 1][j])  - dungeon[i][j];
            }
        }
        return healths[0][0];
    }
};
//Error: AddressSanitizer: dynamic-stack-buffer-overflow
