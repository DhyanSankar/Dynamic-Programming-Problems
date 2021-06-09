//https://practice.geeksforgeeks.org/problems/maximum-sum-rectangle2948/1
// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {
        vector<vector<int>> dp;
        vector<int> temp(M[0].size(), 0);
        int sum = 0;
        for(int i = 0; i < M.size(); i++){
            dp.push_back(temp);
        }
        dp[0][0] = M[0][0];
        for(int i = 1; i < M.size(); i++){
            dp[0][i] = dp[0][i - 1] + M[0][i];
        }
        for(int i = 1; i < M.size(); i++){
            dp[i][0] = dp[i - 1][0] + M[i][0];
        }
        for(int i = 1; i < M.size(); i++){
            for(int j = 1; j < M[0].size(); j++){
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j] - dp[i - 1][j - 1];
            }
        }
        int maxSum = INT_MIN;
        for(int iOne = 0; iOne < M.size(); iOne++){
            for(int jOne = 0; jOne < M[0].size(); jOne++){
                for(int iTwo = iOne; iTwo < M.size(); iTwo++){
                    for(int jTwo = jOne; jTwo < M[0].size(); jTwo++){
                        //code
                    }
                }
            }
        }
    }
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        Solution ob;
        cout << ob.maximumSumRectangle(N, M, v) << "\n";
    }
}  // } Driver Code Ends