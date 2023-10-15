// this is gfg problem of the day of 15 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/normal-bst-to-balanced-bst/1

class Solution{
    
    public:
    
    void inorder(Node* root, vector<int> &v)
    {
        if(!root)
            return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    Node* build(vector<int> &v, int s, int e)
    {
        if(s>e)
            return NULL;
            
        int mid=s+(e-s)/2;
        
        Node* root=new Node(v[mid]);
        root->left=build(v,s,mid-1);
        root->right=build(v,mid+1,e);
        
        return root;
    }
    
    Node* buildBalancedTree(Node* root)
    {
        vector<int> v;
        inorder(root,v);
        root=build(v,0,v.size()-1);
        return root;
    }
};
