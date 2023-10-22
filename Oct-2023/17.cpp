// this is gfg problem of the day of 17 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/transitive-closure-of-a-graph0930/1

class Solution{
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph)
    {
        
        vector<int> adj[N];
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<N;j++)
            {
                if(graph[i][j]==1)
                    adj[i].push_back(j);
            }
        }
        
        vector<vector<int>> ans(N,vector<int> (N,0));
        for(int i=0;i<N;i++)
        {
            vector<int> visited(N,0);
            queue<int> q;
            q.push(i);
            visited[i]=1;
            
            while(!q.empty())
            {
                int j=q.front();
                q.pop();
                
                ans[i][j]=1;
                
                for(auto k:adj[j])
                {
                    if(visited[k]==0)
                    {
                        visited[k]=1;
                        q.push(k);
                    }
                }
            }
        }
        
        return ans;
    }
};
