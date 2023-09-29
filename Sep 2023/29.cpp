// this is gfg problem of the day of 29 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/number-of-enclaves/1

class Solution {
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        queue<pair<int,int>> q;
        int n,m;
        n=grid.size();
        m=grid[0].size();
        vector<vector<int>> visited(n,vector<int> (m,0));
        int ans=0;
        
        int dr[]={1,0,-1,0};
        int dc[]={0,1,0,-1};
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1&&visited[i][j]==0)
                {
                    visited[i][j]=1;
                    int cnt=0;
                    q.push({i,j});
                    bool f=1;
                    
                    while(!q.empty())
                    {
                        int u=q.front().first;
                        int v=q.front().second;
                        q.pop();
                        cnt++;
                        
                        for(int k=0;k<4;k++)
                        {
                            int next_row=u+dr[k];
                            int next_col=v+dc[k];
                            
                            if(next_row>=0&&next_col>=0&&next_row<n&&next_col<m)
                            {
                                if(grid[next_row][next_col]==1&&visited[next_row][next_col]==0)
                                {
                                    q.push({next_row,next_col});
                                    visited[next_row][next_col]=1;
                                }
                            }
                            else 
                                f=0;
                        }
                    }
                    
                    if(f)
                        ans+=cnt;
                }
            }
        }
        
        return ans;
    }
};
