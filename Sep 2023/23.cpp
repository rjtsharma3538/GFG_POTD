// this is gfg problem of the day of 23 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1

class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        long long int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        long long s=0;
        for(int i=0;i<n;i++)
        {
            if(s==sum-s-a[i])
                return i+1;
            s+=a[i];
        }
        
        return -1;
    }
};
