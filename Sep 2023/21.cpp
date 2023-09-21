// this is gfg problem of the day of 21 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/stickler-theif-1587115621/1

class Solution
{
    public:
    
    int FindMaxSum(int arr[], int n)
    {
        if(n==1)
            return arr[0];
        if(n==2)
            return max(arr[0],arr[1]);
        
        vector<int> dp(n,-1);
        
        int prev1,prev2,curr;
        prev1=arr[0];
        prev2=max(arr[0],arr[1]);
        
        for(int i=2;i<n;i++)
        {
            curr=max(prev2,prev1+arr[i]);
            prev1=prev2;
            prev2=curr;
        }
        
        return curr;
    }
};
