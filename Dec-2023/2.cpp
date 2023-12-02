// this is gfg problem of the day of 2 Dec 2023
// problem link : https://www.geeksforgeeks.org/problems/inorder-traversal-and-bst5855/1

class Solution{
    public:
    int isRepresentingBST(int arr[], int N)
    {
        // code here
        for(int i=1;i<N;i++)
        {
            if(arr[i]<=arr[i-1])
                return false;
        }
        
        return true;
    }
};
