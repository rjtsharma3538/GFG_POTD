// this is gfg problem of the day of 14 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1

class Solution{

	public:
	
	int mod=1e9+7;
	
	int help(int idx, int target, int arr[], vector<vector<int>> &dp)
	{
	    if(idx==0&&target==0)
	    {
	        if(arr[idx]==0)
	            return dp[idx][target]=2;
	        return dp[idx][target]=1;
	    }
	        
	    if(idx==0)
	    {
	        if(arr[idx]==target)
	            return dp[idx][target]=1;
	        return dp[idx][target]=0;
	    }
	
	    if(dp[idx][target]!=-1)
	        return dp[idx][target];
	   
	    int op1=0,op2=0;
	    
	    op1=help(idx-1,target,arr,dp);
	    if(arr[idx]<=target)
	        op2=help(idx-1,target-arr[idx],arr,dp);
	   
	    return dp[idx][target]=(op1+op2)%mod;
	}
	
	int perfectSum(int arr[], int n, int sum)
	{
        vector<vector<int>> dp(n,vector<int> (sum+1,-1));
        return help(n-1,sum,arr,dp);
	}
	  
};
