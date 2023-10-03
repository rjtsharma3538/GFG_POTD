// this is gfg problem of the day of 3 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/column-name-from-a-given-column-number4244/1

class Solution{
    public:
    string colName (long long int n)
    {
        map<int,char> mp;
        char c='A';
        for(int i=1;i<=26;i++)
        {
            mp[i]=c;
            c++;
        }
        
        string res="";
        while(n)
        {
            int rem=n%26;
            n/=26;
            if(rem==0)
            {
                res+='Z';
                n--;
            }
            else 
                res+=mp[rem];
        }
        
        reverse(res.begin(),res.end());
        return res;
    }
};
