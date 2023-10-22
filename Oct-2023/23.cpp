// this is gfg problem of the day of 25 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1

class Solution{
    
public:

	int maxSumIS(int arr[], int n)  
	{
	    vector<int> dp(n,1);
	    for(int i=0;i<n;i++)
	        dp[i]=arr[i];
	        
	    int maxi=1;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<i;j++)
	        {
	            if(arr[i]>arr[j])
	                dp[i]=max(dp[i],arr[i]+dp[j]);
	        }
	        maxi=max(maxi,dp[i]);
	    }
	    
	    return maxi;
	}  
};
