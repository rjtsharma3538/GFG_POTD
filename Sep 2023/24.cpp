// this is gfg problem of the day of 24 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        unordered_map<int,int> mp;
        vector<int> ans;
        
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]==2)
                ans.push_back(arr[i]);
        }
        
        if(ans.size()==0)
            return {-1};
            
        sort(ans.begin(),ans.end());
        return ans;
    }
};
