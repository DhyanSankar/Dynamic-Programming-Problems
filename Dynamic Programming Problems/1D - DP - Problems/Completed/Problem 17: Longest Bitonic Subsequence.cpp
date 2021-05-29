// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int LongestBitonicSequence(vector<int>nums)
	{
	    int t[n], p[n];
	    int n = nums.size();
	    t[0] = 1;
	    for(int i = 1; i < n; i++)
	    {
	        t[i] = 1;
	        for(int j = 0;j < i; j++)
	        {
	            if(nums[i] > nums[j] && t[i] < 1 + t[j])
	                t[i] = 1 + t[j];
	        }
	    }
	    p[n-1] = 1;
	    for(int i = n-2; i >= 0; i--)
	    {
	        p[i] = 1;
	        for(int j = n-1; j > i; j--)
	        {
	            if(nums[i] > nums[j] && p[i] < 1 + p[j])
	                p[i] = 1 + p[j];
	        }
	    }
	    int maxi = INT_MIN;
	    for(int i = 0; i < n; i++)
	    {
	        if(maxi < t[i]+p[i]-1)
	            maxi = t[i] + p[i] - 1;
	    }
	    return maxi;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends