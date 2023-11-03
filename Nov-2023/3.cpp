// this is gfg problem of the day of 3 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/pythagorean-triplet3018/1

class Solution{
public:

	bool checkTriplet(int arr[], int n) {
	    
	    int maxi=0;
	    for(int i=0;i<n;i++)
	        maxi=max(maxi,arr[i]);
	    maxi*=maxi;
        vector<int> v(maxi+1,0);
        for(int i=0;i<n;i++)
            v[arr[i]*arr[i]]=1;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int sum=arr[i]*arr[i]+arr[j]*arr[j];
                if(sum<=maxi&&v[sum]==1)
                    return true;
            }
        }
        
        return false;
	}
};
