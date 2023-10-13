// this is gfg problem of the day of 13 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/floor-in-bst/1

class Solution{

public:
    int floor(Node* root, int x) {
        int ans=-1;
        while(root)
        {
            if(root->data==x)
                return x;
            if(root->data<x)
            {
                ans=max(ans,root->data);
                root=root->right;
            }
            else 
                root=root->left;
        }
        return ans;
    }
};
