// this is gfg problem of the day of 2 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/minimum-distance-between-two-numbers/1

class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int idx1=-1,idx2=-1,ans=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
                idx1=i;
            if(a[i]==y)
                idx2=i;
            if(idx1!=-1&&idx2!=-1)
                ans=min(ans,abs(idx1-idx2));                
        }
        
        if(ans==INT_MAX)
            return -1;
        return ans;
    }
};
