// this is gfg problem of the day of 3 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/check-if-tree-is-isomorphic/1

class Solution{
  public:
  
    bool isIsomorphic(Node *root1,Node *root2)
    {
        if(!root1&&!root2)
            return true;
        if(!root1)
            return false;
        if(!root2)
            return false;
        if(root1->data!=root2->data)
            return false;
            
        bool l1,r1,l2,r2;
        l1=isIsomorphic(root1->left,root2->right);
        r1=isIsomorphic(root1->right,root2->left);
        
        l2=isIsomorphic(root1->left,root2->left);
        r2=isIsomorphic(root1->right,root2->right);
        
        if(l1&r1)
            return true;
        if(l2&r2)
            return true;
        return false;
    }
};
