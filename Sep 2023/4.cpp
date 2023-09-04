// this is gfg problem of the day of 4 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/replace-os-with-xs0052/1

class Solution{
public:
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        vector<vector<int>> visited(n,vector<int> (m,0));
        int dr[]={1,0,-1,0};
        int dc[]={0,1,0,-1};
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]=='O'&&visited[i][j]==0)
                {
                   // cout<<i<<" "j<<" ";
                    queue<pair<int,int>> q;
                    vector<pair<int,int>> v;
                    visited[i][j]=1;
                    q.push({i,j});
                    v.push_back({i,j});
                    bool f=1;
                    
                    while(!q.empty())
                    {
                        int row=q.front().first;
                        int col=q.front().second;
                        q.pop();
                        
                        for(int k=0;k<4;k++)
                        {
                            int next_row=row+dr[k];
                            int next_col=col+dc[k];
                            
                            if(next_row<0||next_row==n||next_col<0||next_col==m)
                                f=0;
                            else 
                            {
                                if(visited[next_row][next_col]==0&&mat[next_row][next_col]=='O')
                                {
                                    visited[next_row][next_col]=1;
                                    q.push({next_row,next_col});
                                    v.push_back({next_row,next_col});
                                }
                            }
                        }
                    }
                    if(f==1)
                    {
                        for(auto it:v)
                            mat[it.first][it.second]='X';
                    }
                }
            }
        }
        return mat;
    }
};
