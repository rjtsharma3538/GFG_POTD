// this is gfg problem of the day of 1 Dec 2023
// problem link : https://www.geeksforgeeks.org/problems/check-whether-bst-contains-dead-end/1

class Solution{
  public:
    
    bool inorder(Node* root, int &prev)
    {
        if(!root)
            return false;
        bool l,r;
        l=inorder(root->left,prev);
        if(prev<0&&root->data==abs(prev)+1)
            return true;
        if(!root->left&&!root->right)
        {
            if(root->data==prev+1)
                prev=-root->data;
            else 
                prev=root->data;
        }
        else 
            prev=root->data;
        r=inorder(root->right,prev);
        
        return l|r;
    }
    
    bool isDeadEnd(Node *root)
    {
        //Your code here
        int prev=0;
        return inorder(root,prev);
    }
};
