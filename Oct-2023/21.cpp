// this is gfg problem of the day of 21 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1

class Solution
{
public:
    long long sumOfDivisors(int N)
    {
        long long sum=0;
        for(int i=1;i<=N;i++)
        {
            long long x=N/i;
            sum+=(long long)i*x;
        }
        
        return sum;
    }
};
