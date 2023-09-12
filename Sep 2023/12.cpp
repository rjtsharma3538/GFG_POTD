// this is gfg problem of the day of 12 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/perfect-numbers3207/1

class Solution {
  public:
    int isPerfectNumber(long long N) {
        if(N==1)
            return 0;
        long long int sum=1;
        long long int x=sqrt(N);
        for(long long int i=2;i<=x;i++)
        {
            if(N%i==0)
            {
                sum+=i;
                if(i!=1&&N/i!=i)
                    sum+=N/i;
                if(sum>N)
                    return 0;
            }
        }
        
        if(sum==N)
            return 1;
        return 0;
    }
};
