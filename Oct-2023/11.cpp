// this is gfg problem of the day of 11 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/check-for-balanced-tree/1

class Solution{
    public:
    //Function to check whether a binary tree is balanced or not.
    int height(Node* root)
    {
        if(!root)
            return 0;
        int l,r;
        l=height(root->left);
        r=height(root->right);
        
        if(l==-1)
            return -1;
        if(r==-1)
            return -1;
        if(abs(l-r)>1)
            return -1;
        return 1+max(l,r);
    }
    bool isBalanced(Node *root)
    {
        if(height(root)==-1)
            return 0;
        return 1;
    }
};
