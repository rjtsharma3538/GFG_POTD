// this is gfg problem of the day of 20 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/form-a-number-divisible-by-3-using-array-digits0717/1

class Solution {
  public:
    
    int summation(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    
    int isPossible(int N, int arr[]) {
        int sum=0;
        for(int i=0;i<N;i++)
            sum+=summation(arr[i]);
        
        if(sum%3==0)
            return 1;
        return 0;
    }
};
