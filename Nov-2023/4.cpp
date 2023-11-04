// this is gfg problem of the day of 4 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/find-transition-point-1587115620/1

class Solution
{
public:    
    
    int transitionPoint(int arr[], int n) {
        // code here
        int s=0,e=n-1,mid,ans=-1;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(arr[mid]==1)
            {
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        
        return ans;
    }
};
