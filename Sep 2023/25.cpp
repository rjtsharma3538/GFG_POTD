// this is gfg problem of the day of 25 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/maximum-sum-combination/1

class Solution {
  public:
    vector<int> maxCombinations(int N, int K, vector<int> &A, vector<int> &B) {
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<N;i++)
        {
            pq.push({A[i]+B[N-1],N-1});
        }
        
        vector<int> ans;
        
        while(K--&&!pq.empty())
        {
            int sum=pq.top().first;
            int idx=pq.top().second;
            pq.pop();
            
            ans.push_back(sum);
            
            if(idx-1>=0)
                pq.push({sum-B[idx]+B[idx-1],idx-1});
        }
        
        return ans;
    }
};
