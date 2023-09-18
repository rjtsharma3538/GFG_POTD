// this is gfg problem of the day of 19 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1

class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        unsigned int cnt=1;
        while(n)
        {
            if((n&1))
                return cnt;
            cnt++;
            n=n>>1;
        }
        
        return 0;
    }
};
