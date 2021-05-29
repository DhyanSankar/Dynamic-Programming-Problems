// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

 // } Driver Code Ends
//User function template for C++
class Solution{
    public:
    ll countStrings(int n) 
    {
        if(n == 1)
        {
            return 2;
        }
        else if(n == 2)
        {
            return 3;
        }
        ll one = 2;
        ll two = 3;
        ll three;
        for(int i = 3; i <= n; i++)
        {
            three = (one + two) % 1000000007;
            
            one = two;
            two = three;
        }
        return three;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends