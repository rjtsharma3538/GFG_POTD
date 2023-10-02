// this is gfg problem of the day of 2 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/number-of-distinct-subsequences0909/1

class Solution{
  public:	
	int distinctSubsequences(string s)
	{
	    int n=s.size();
	    vector<int> last(26,-1);
	    vector<int> dp(n+1,1);
	    int mod=1e9+7;
	    
	    for(int i=1;i<=n;i++)
	    {
	        dp[i]=2*dp[i-1];
            int last_occur=last[s[i-1]-'a'];
            
            if(last_occur!=-1)
            {
                dp[i]-=dp[last_occur];
                if(dp[i]<0)
                    dp[i]+=mod;
            }
            
            dp[i]=dp[i]%mod;
            last[s[i-1]-'a']=i-1;
	    }
	    
	    return dp[n];
	}
};
