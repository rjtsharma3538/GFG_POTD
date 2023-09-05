// this is gfg problem of the day of 5 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/print-adjacency-list-1587115620/1

class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int,int>>edges) {
        vector<vector<int>> adj(V);
        for(auto it:edges)
        {
            adj[it.first].push_back(it.second);
            adj[it.second].push_back(it.first);
        }
        return adj;
    }
};
