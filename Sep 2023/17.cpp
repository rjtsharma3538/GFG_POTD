// this is gfg problem of the day of 17 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/print-first-n-fibonacci-numbers1002/1

class Solution
{
    public:
    //Function to return list containing first n fibonacci numbers.
    vector<long long> printFibb(int n) 
    {
        if(n==1)
            return {1};
        if(n==2)
            return {1,1};
        vector<long long> v(n);
        v[0]=1;
        v[1]=1;
        
        for(int i=2;i<n;i++)
            v[i]=v[i-1]+v[i-2];
        
        return v;
    }
};
