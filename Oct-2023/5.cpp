// this is gfg problem of the day of 9 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/count-number-of-substrings4528/1

class Solution
{
  public:
    
    long long int count(string s, int k)
    {
        int i=0,j=0,ans=0;
        vector<int> mp(26,0);
        int sz=0;
        
        while(j<s.size())
        {
            mp[s[j]-'a']++;
            if(mp[s[j]-'a']==1)
                sz++;
            if(sz<=k)
            {
                ans+=(j-i+1);
                j++;
            }
            else 
            {
                while(sz>k)
                {
                    mp[s[i]-'a']--;
                    if(mp[s[i]-'a']==0)
                        sz--;
                    i++;
                }
                ans+=(j-i+1);
                j++;
            }
        }
        
        return ans;
    }
    
    long long int substrCount (string s, int k) {
        return count(s,k)-count(s,k-1);
    }
};
