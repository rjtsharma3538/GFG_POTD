// this is gfg problem of the day of 9 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/predict-the-column/1

class Solution{
    public:
    /*Function to count zeros in each column
    * N : Number of rows and columns in array
    M is the matrix that is globally declared
    */
    int columnWithMaxZeros(vector<vector<int>>arr,int N){
        
        // Your code here
        int maxi=0,ans=-1;
        
        for(int j=0;j<N;j++)
        {
            int cnt=0;
            for(int i=0;i<N;i++)
            {
                if(arr[i][j]==0)
                    cnt++;
            }
            
            if(cnt>maxi)
            {
                maxi=cnt;
                ans=j;
            }
        }
        
        return ans;
        
        
    }
};
