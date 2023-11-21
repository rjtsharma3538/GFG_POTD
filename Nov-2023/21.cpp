// this is gfg problem of the day of 21 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/determine-if-two-trees-are-identical/1

class Solution
{
    public:
    //Function to check if two trees are identical
    bool isIdentical(Node *r1, Node *r2)
    {
        //Your Code here
        if(!r1&&!r2)
            return true;
        if(!r1||!r2)
            return false;
        if(r1->data!=r2->data)
            return false;
        bool l=isIdentical(r1->left,r2->left);
        bool r=isIdentical(r1->right,r2->right);
        
        return l&r;
    }
};
