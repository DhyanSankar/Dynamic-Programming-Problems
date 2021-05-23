// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int maxHeight(int height[],int width[],int length[],int n)
    {
        Box b[3*n];
        int index = -1;
        for(int i=0;i<n;i++){
        
        index++;
        b[index].l = max(length[i],width[i]);
        b[index].w = min(width[i],length[i]);
        b[index].h = height[i];
    
        index++;
        b[index].h = width[i];
        b[index].l = max(height[i],length[i]);
        b[index].w = min(height[i],length[i]);
    
        index++;
        b[index].h = length[i];
        b[index].l = max(width[i],height[i]);
        b[index].w = min(width[i],height[i]);
      }
    
      sort(b,b+(3*n),cmp);
    
      int value[n*3];
    
      for(int i=0;i<n*3;i++){
        value[i] = b[i].h;
      }
    
      int mx = INT_MIN;
    
      for(int i=0;i<n*3;i++){
        for(int j=i-1;j>=0;j--){
    
          if(b[j].l > b[i].l && b[j].w > b[i].w)
            value[i] = max(value[i],value[j]+b[i].h);
    
          mx = max(mx , value[i]);

    }
  }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int n;
        cin>>n;
        
    
        int A[105],B[105],C[105];
        for(int i = 0; i < n; i++)cin >> A[i];
        for(int j = 0; j < n; j++)cin >> B[j];
        for(int k = 0; k < n; k++)cin >> C[k];
        Solution ob;
        cout<<ob.maxHeight(A,B,C,n)<<endl;
    }
	
	return 0;
}
	  // } Driver Code Ends