// this is gfg problem of the day of 5 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/top-k-frequent-elements-in-array/1

class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        map<int,int> mp;
        for(auto it:nums)
            mp[it]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        for(auto it:mp)
        {
            pq.push({it.second,it.first});
            if(pq.size()>k)
                pq.pop();
        }
        
        vector<int> ans;
        
        while(!pq.empty())
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};
