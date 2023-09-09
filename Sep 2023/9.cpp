// this is gfg problem of the day of 9 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/kth-largest-element-in-bst/1

class Solution
{
    public:
    
    void traverse(Node* root, int &cnt, int K, int &ans)
    {
        if(!root)
            return;
        if(ans!=-1)
            return;
        traverse(root->right,cnt,K,ans);
        if(cnt==K)
            ans=root->data;
        cnt++;
        traverse(root->left,cnt,K,ans);
    }
    
    int kthLargest(Node *root, int K)
    {
        int cnt=1,ans=-1;
        traverse(root,cnt,K,ans);
        return ans;
    }
};
