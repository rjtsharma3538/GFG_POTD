// this is gfg problem of the day of 22 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/symmetric-tree/1

class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    bool help(struct Node* p, struct Node* q)
    {
        if(!p&&!q)
            return true;
        if(!p||!q)
            return false;
        if(p->data!=q->data)
            return false;
        bool l=help(p->left,q->right);
        if(!l)
            return l;
        bool r=help(p->right,q->left);
        return l&r;
    }
    
    bool isSymmetric(struct Node* root)
    {
	    // Code here
	    return help(root,root);
    }
};
