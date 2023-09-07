// this is gfg problem of the day of 7 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/minimum-multiplications-to-reach-end/1

class Solution {
  public:
    int minimumMultiplications(vector<int>& arr, int start, int end) {
        
        if(start==end)
            return 0;
        queue<int> q;
        q.push(start);
        int cnt=1;
        int mod=1e5;
        vector<int> distance(1e5,-1);
        distance[start]=0;
        
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                int num=q.front();
                q.pop();
          
                if(num==end)
                    return distance[num];
                    
                for(int i=0;i<arr.size();i++)
                {
                    int x=((num%mod)*(arr[i]%mod))%mod;
                    if(distance[x]==-1)
                    {
                        distance[x]=cnt;
                        q.push(x);
                    }
                }
            }
            cnt++;
        }
        
        return -1;
    }
};
