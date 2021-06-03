//https://leetcode.com/problems/count-square-submatrices-with-all-ones/
class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int counter = 0; 
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> vect((n), vector<int> (m));
        for(int i = 0; i < m; i++){
            vect[0][i] = matrix[0][i];
            counter = counter + vect[0][i];
        } 

        for(int i=1; i<n; i++){
            vect[i][0] = matrix[i][0];
            counter = counter +  vect[i][0];
        }
        for(int i=1; i < n; i++){
            for(int j=1; j < m; j++){
                //makes new spot equal to how many squares
                if(matrix[i][j] == 1){
                    vect[i][j] = 1 + min(min(vect[i][j-1], vect[i - 1][j-1]), vect[i-1][j]);
                    counter = counter + vect[i][j];
                }
            }
        }
        return counter;
    }
};