// this is gfg problem of the day of 19 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/level-of-nodes-1587115620/1

class Solution
{
	public:
	//Function to find the level of node X.
	int nodeLevel(int V, vector<int> adj[], int X) 
	{
	    queue<pair<int,int>> q;
	    q.push({0,0});
	    vector<int> visited(V,0);
	    
	    while(!q.empty())
	    {
	        int sz=q.size();
	        for(int i=0;i<sz;i++)
	        {
	            int y=q.front().first;
	            int level=q.front().second;
	            q.pop();
	            
	            if(y==X)
	                return level;
	            
	            for(auto it:adj[y])
	            {
	                if(visited[it]==0)
	                {
	                    visited[it]=1;
	                    q.push({it,level+1});
	                }
	            }
	        }
	    }
	    
	    return -1;
	}
};
