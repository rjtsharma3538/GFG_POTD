// this is gfg problem of the day of 16 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1

class Solution
{
    public:

    long long int mod=1e9+7;
    
    long long int help(int idx, vector<long long int> &dp)
    {
        if(idx<0)
            return 0;
        if(idx==0)
            return 1;
        if(dp[idx]!=-1)
            return dp[idx];
        long long int op1=0,op2=0,op3=0;
        op1=help(idx-1,dp);
        op2=help(idx-2,dp);
        op3=help(idx-3,dp);
        
        return dp[idx]=(op1+op2+op3)%mod;
    }
    
    long long countWays(int n)
    {
        vector<long long int> dp(n+1,-1);
        return help(n,dp);
    }
};
