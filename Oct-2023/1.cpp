// this is gfg problem of the day of 1 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/boundary-traversal-of-matrix-1587115620/1

class Solution
{   
    public:
    
    vector<int> boundaryTraversal(vector<vector<int> > matrix, int n, int m) 
    {
        vector<int> v;
        for(int i=0;i<m;i++)
            v.push_back(matrix[0][i]);
        for(int i=1;i<n;i++)
            v.push_back(matrix[i][m-1]);
        if(n!=1)
            for(int i=m-2;i>=0;i--)
                v.push_back(matrix[n-1][i]);
        if(m!=1)
            for(int i=n-2;i>=1;i--)
                v.push_back(matrix[i][0]);
        
        return v;
    }
};
