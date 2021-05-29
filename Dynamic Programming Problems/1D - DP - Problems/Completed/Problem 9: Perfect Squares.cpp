class Solution {
public:
    int num(int n,vector<int>& vect,vector<int>& dp){
        
        if(n==0)
            return 0;
        
        else if(dp[n]!=-1)
            return dp[n];
        
        int steps=0;
        int min_steps=INT_MAX;
        for(int i=0;i<vect.size();i++){
            if(n-vect[i]>=0){
                steps=1+num(n-vect[i],vect,dp);
                if(steps<min_steps)
                    min_steps=steps;
            }
            else
                break;
        }
        
        dp[n]=min_steps;
        
        return dp[n];
    }

    int func(int n) {
        
        vector<int> vect;
        vector<int> dp (n+1,-1);
        dp[0]=0;
        
        for(int i=1;i*i<=n;i++)
            v.push_back(i*i);
            
         int x=num(n,v,dp);
                
        return x;
    }
};