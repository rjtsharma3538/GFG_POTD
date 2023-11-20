// this is gfg problem of the day of 20 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/k-sum-paths/1

class Solution{
  public:
    
    void traverse(Node* root, int k, map<int,int> &mp, int &ans, int &sum)
    {
        if(!root)
            return;
        sum+=root->data;
        if(sum==k)
            ans++;
        if(mp.find(sum-k)!=mp.end())
            ans+=mp[sum-k];
        mp[sum]++;
        traverse(root->left,k,mp,ans,sum);
        traverse(root->right,k,mp,ans,sum);
        
        mp[sum]--;
        sum-=root->data;    
    }
    
    int sumK(Node *root,int k)
    {
        int sum=0,ans=0;
        map<int,int> mp;
        traverse(root,k,mp,ans,sum);
        return ans;
    }
};
