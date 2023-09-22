// this is gfg problem of the day of 22 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1

class Solution
{
    public:
    
    int first(int arr[], int n, int x)
    {
        int s=0,e=n-1,mid,ans=-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(arr[mid]==x)
            {
                ans=mid;
                e=mid-1;
            }
            else if(arr[mid]>x)
                e=mid-1;
            else 
                s=mid+1;
        }
        return ans;
    }
    
    int last(int arr[], int n, int x)
    {
        int s=0,e=n-1,mid,ans=-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(arr[mid]==x)
            {
                ans=mid;
                s=mid+1;
            }
            else if(arr[mid]>x)
                e=mid-1;
            else 
                s=mid+1;
        }
        return ans;
    }
    
    vector<int> find(int arr[], int n , int x )
    {
        int f=first(arr,n,x);
        if(f==-1)
            return {-1,-1};
        int s=last(arr,n,x);
        return {f,s};
    }
};
