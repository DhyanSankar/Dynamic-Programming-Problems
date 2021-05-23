// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

/*You are required to complete this method*/
bool func(struct val one, struct val two){
    return one.second < two.second;
}
int maxChainLen(struct val p[],int n)
{
    sort(p, p + n, func);
    int dparr[n];
    for(int i = 0; i < n; i++){
        dparr[i] = 1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(p[i].first > p[j].second && dparr[i] < dparr[j] + 1){
                dparr[i] = dparr[j] + 1;
            }
        }
    }
    int max;
    for(int i = 0; i < n; i++){
        if(dparr[i] > max){
            max = dparr[i];
        }
    }
}