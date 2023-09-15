// this is gfg problem of the day of 15 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1

class Solution{
public:
    
    bool help(int idx, int target, int arr[], vector<vector<int>> &dp)
    {
        if(idx<0)
        {
            if(target==0)
                return 1;
            return 0;
        }
        
        if(dp[idx][target]!=-1)
            return dp[idx][target];
        
        bool op1=false,op2=false;
        
        op1=help(idx-1,target,arr,dp);
        if(arr[idx]<=target)
            op2=help(idx-1,target-arr[idx],arr,dp);
        
        return dp[idx][target]=op1|op2;
    }
    
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
            sum+=arr[i];
        
        if(sum%2)
            return 0;
        
        sum/=2;
        
        vector<vector<int>> dp(N,vector<int> (sum+1,-1));
        return help(N-1,sum,arr,dp);
        
    }
};
