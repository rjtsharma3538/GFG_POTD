// this is gfg problem of the day of 2 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/leaf-under-budget/1

class Solution
{
public:
    
    void traverse(Node* root, int level, vector<int> &v)
    {
        if(!root)
            return;
        if(!root->left&&!root->right)
        {
            v.push_back(level);
            return;            
        }
        
        traverse(root->left,level+1,v);
        traverse(root->right,level+1,v);
    }
    
    int getCount(Node *root, int k)
    {
        vector<int> v;
        traverse(root,1,v);
        sort(v.begin(),v.end());
        int cnt=0;
        
        for(int i=0;i<v.size();i++)
        {
            if(k<v[i])
                break;
            k-=v[i];
            cnt++;
        }
        
        return cnt;
    }
};
