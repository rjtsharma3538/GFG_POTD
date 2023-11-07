// this is gfg problem of the day of 7 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/sum-of-upper-and-lower-triangles-1587115621/1

class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
        int up=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
                up+=matrix[i][j];
        }
        
        int down=0;
        
        for(int i=n-1;i>=0;i--)
        {
            for(int j=i;j>=0;j--)
                down+=matrix[i][j];
        }
        
        return {up,down};
    }
}
