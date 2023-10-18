// this is gfg problem of the day of 18 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/eventual-safe-states/1

class Solution {
  public:
    
    bool dfs(int node, vector<int> adj[], vector<int> &visited, vector<int> &path_visited, vector<int> &ans)
    {
        visited[node]=1;
        path_visited[node]=1;
        
        for(auto next_node : adj[node])
        {
            if(path_visited[next_node]==1)
                return true;
            if(visited[next_node]==0&&dfs(next_node,adj,visited,path_visited,ans))
                return true;
        }
        path_visited[node]=0;
        ans.push_back(node);
        return false;
    }
    
    vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        // code here
        vector<int> visited(V,0),path_visited(V,0),ans;
        for(int i=0;i<V;i++)
        {
            if(visited[i]==0)
                dfs(i,adj,visited,path_visited,ans);
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};
