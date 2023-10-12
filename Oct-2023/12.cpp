// this is gfg problem of the day of 12 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/duplicate-subtree-in-binary-tree/1

class Solution {
  public:
    /*This function returns true if the tree contains 
    a duplicate subtree of size 2 or more else returns false*/
    
    bool isleaf(Node* root)
    {
        if(!root)
            return false;
        if(!root->left&&!root->right)
            return true;
        return false;
    }
    
    bool help(Node* root, map<int,vector<Node*>> &mp)
    {
        if(!root)
            return false;
        if(mp.find(root->data)!=mp.end())
        {
            vector<Node*> v=mp[root->data];
            for(auto node : v)
            {
                int cnt=0;
                if(isleaf(root->left)&&isleaf(node->left)&&root->left->data==node->left->data)
                {
                    if(!root->right&&!node->right)
                        return true;
                    else 
                        cnt++;
                }
                if(isleaf(root->right)&&isleaf(node->right)&&root->right->data==node->right->data)
                {
                    if(!root->left&&!node->left)
                        return true;
                    else
                        cnt++;
                }
                if(cnt==2)
                    return true;
            }
        }
        
        mp[root->data].push_back(root);
        bool l,r;
        l=help(root->left,mp);
        r=help(root->right,mp);
        
        return l|r;
    }
    
    int dupSub(Node *root) {
        map<int,vector<Node*>> mp;
        if(help(root,mp))
            return 1;
        return 0;
    }
};
