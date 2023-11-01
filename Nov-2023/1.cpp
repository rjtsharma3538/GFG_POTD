// this is gfg problem of the day of 1 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/frequency-of-array-elements-1587115620/1

class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int N, int P)
    {
        vector<int> freq(P+1,0);
        for(int i=0;i<N;i++)
            freq[arr[i]]++;
        for(int i=0;i<N;i++)
        {
            if(i+1<=P)
                arr[i]=freq[i+1];
            else 
                arr[i]=0;
        }
    }
};
