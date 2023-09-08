// this is gfg problem of the day of 8 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/binary-tree-to-bst/1

/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
}; 
*/

class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void traverse(vector<int> &v, Node* root)
    {
        if(!root)
            return;
        v.push_back(root->data);
        traverse(v,root->left);
        traverse(v,root->right);
    }
    
    Node *bst(vector<int> v, int low, int high)
    {
        if(low>high)
            return NULL;
        int mid=low+(high-low)/2;
        Node* root=new Node(v[mid]);
        root->left=bst(v,low,mid-1);
        root->right=bst(v,mid+1,high);
        
        return root;
    }
    
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> v;
        traverse(v,root);
        sort(v.begin(),v.end());
        // for(auto it:v)
        //     cout<<it<<" ";
        
        return bst(v,0,v.size()-1);
    }
};
