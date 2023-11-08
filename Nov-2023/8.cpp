// this is gfg problem of the day of 8 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/print-matrix-in-snake-pattern-1587115621/1

class Solution
{   
    public:
    //Function to return list of integers visited in snake pattern in matrix.
    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        vector<int> ans;
        int cnt=0;
        for(int i=0;i<matrix.size();i++)
        {
            if(cnt%2==0)
            {
                for(int j=0;j<matrix[i].size();j++)
                    ans.push_back(matrix[i][j]);
            }
            else 
            {
                for(int j=matrix[i].size()-1;j>=0;j--)
                    ans.push_back(matrix[i][j]);
            }
            cnt++;
        }
        
        return ans;
    }
};
