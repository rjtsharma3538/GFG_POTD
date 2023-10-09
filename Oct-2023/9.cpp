// this is gfg problem of the day of 9 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/height-of-binary-tree/1

class Solution{
    public:

    int height(struct Node* node){
        
        if(!node)
            return 0;
        int l=height(node->left);
        int r=height(node->right);
        
        return 1+max(l,r);
    }
};
