// this is gfg problem of the day of 15 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/print-common-nodes-in-bst/1

class Solution
{
    public:
    //Function to find the nodes that are common in both BST. 
    void inorder(Node* root, vector<int> &v)
    {
        if(!root)
            return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    vector <int> findCommon(Node *root1, Node *root2)
    {
        vector<int> v1,v2;
        inorder(root1,v1);
        inorder(root2,v2);
        
        int i=0,j=0;
        vector<int> ans;
        
        while(i<v1.size()&&j<v2.size())
        {
            if(v1[i]==v2[j])
            {
                ans.push_back(v1[i]);
                i++;
                j++;
            }
            else if(v1[i]>v2[j])
                j++;
            else 
                i++;
        }
        
        return ans;
    }
};
