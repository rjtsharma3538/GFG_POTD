// this is gfg problem of the day of 26 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/find-all-four-sum-numbers1732/1

class Solution{
    public:
    
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++)
        {
            if(i!=0&&arr[i]==arr[i-1])
                continue;
            int j=i+1;
            while(j<arr.size())
            {
                if(j!=i+1&&arr[j]==arr[j-1])
                    j++;
                else 
                {
                    int p=j+1;
                    int q=arr.size()-1;
                    
                    while(p<q)
                    {
                    
                        if(arr[p]+arr[q]==k-arr[i]-arr[j])
                        {
                            ans.push_back({arr[i],arr[j],arr[p],arr[q]});
                            p++;
                            q--;
                            while(p<arr.size()-1&&arr[p]==arr[p-1])
                                p++;
                            while(q>=0&&arr[q]==arr[q+1])
                                q--;
                        }
                        
                        else if(arr[p]+arr[q]>k-arr[i]-arr[j])
                            q--;
                        else 
                            p++;
                    }
                    j++;
                }
            }
        }
        
        return ans;
    }
};
