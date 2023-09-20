// this is gfg problem of the day of 20 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/rotate-bits4524/1

class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            int ans1 = n, ans2 = n;
            d %= 16;
            ans1 = (((n << d) | (n >> (16 - d))) & 65535);
            ans2 = (((n >> d) | (n << (16 - d))) & 65535);
		      return {ans1, ans2};
        }
};
