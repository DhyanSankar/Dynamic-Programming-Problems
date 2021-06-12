//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    int b = 0, mid, e = n - 1, first = -1, last = -1;
    while(b <= e){
        mid = (b + e)/2;
        if(mid == 0 || x > arr[mid - 1] && arr[mid] == x){
            first = mid;
            break;
        }
        else if(x > arr[mid]){
            b = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    b = 0;
    e = n - 1;
    while(b <= e){
        mid = b + (e - b)/2;
        if((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x){
            last = mid;
            break;
        }
        else if(x > arr[mid]){
            b = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    vector<int> vect;
    vect.push_back(first);
    vect.push_back(last);
    return vect;
}