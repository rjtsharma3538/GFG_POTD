// this is gfg problem of the day of 6 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/c-letters-collection4552/1

class Solution{
public:
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> queries[])
    {
        int dr1[]={-1,-1,-1,0,0,1,1,1};
        int dc1[]={-1,0,1,-1,1,-1,0,1};
        
        int dr2[]={2,2,2,2,2,-2,-2,-2,-2,-2,0,0,-1,-1,1,1};
        int dc2[]={-2,-1,0,1,2,-2,-1,0,1,2,-2,2,-2,2,-2,2};
        
        vector<int> v;
        
        for(int i=0;i<q;i++)
        {
            int ans=0;
            int r=queries[i][1],c=queries[i][2];
            if(queries[i][0]==1)
            {
                for(int j=0;j<8;j++)
                {
                    int new_r=r+dr1[j];
                    int new_c=c+dc1[j];
                    
                    if(new_r<n&&new_c<m&&new_r>=0&&new_c>=0)
                        ans+=mat[new_r][new_c];
                }
            }
            
            else 
            {
                for(int j=0;j<16;j++)
                {
                    int new_r=r+dr2[j];
                    int new_c=c+dc2[j];
                    
                    if(new_r<n&&new_c<m&&new_r>=0&&new_c>=0)
                        ans+=mat[new_r][new_c];
                }
            }
            
            v.push_back(ans);
        }
        
        return v;
    }
};
