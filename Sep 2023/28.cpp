// this is gfg problem of the day of 28 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/wave-array-1587115621/1

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){
        int i=0;
        while(i<n)
        {
            if(i!=n-1)
                swap(arr[i],arr[i+1]);
            i+=2;
        }
    }
};
