// this is gfg problem of the day of 11 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/nodes-at-given-distance-in-binary-tree/1

class Solution
{
private:

public:

    void traverse(Node* root, map<Node*,Node*> &mp)
    {
        if(!root)
            return;
        if(root->left)
            mp[root->left]=root;
        if(root->right)
            mp[root->right]=root;
        traverse(root->left,mp);
        traverse(root->right,mp);
    }
    
    void find_node(Node* root, int target, Node* &tar)
    {
        if(tar)
            return;
        if(!root)
            return;
        if(root->data==target)
        {
            tar=root;
            return;
        }
        find_node(root->left,target,tar);
        find_node(root->right,target,tar);
    }

    vector <int> KDistanceNodes(Node* root, int target , int K)
    {
        map<Node*,Node*> par;
        traverse(root,par);
        set<Node*> st;
        queue<Node*> q;
        Node* tar=NULL;
        find_node(root,target,tar);
        q.push(tar);
        st.insert(tar);
        int dist=0;
        vector<int> v;
        
        while(!q.empty())
        {
            int sz=q.size();
            for(int i=0;i<sz;i++)
            {
                Node* node=q.front();
                q.pop();
                if(dist==K)
                    v.push_back(node->data);
                if(node->left&&st.find(node->left)==st.end())
                {
                    q.push(node->left);
                    st.insert(node->left);
                }
                if(node->right&&st.find(node->right)==st.end())
                {
                    q.push(node->right);
                    st.insert(node->right);
                }
                if(node!=root&&st.find(par[node])==st.end())
                {
                    q.push(par[node]);
                    st.insert(par[node]);
                }
            }
            dist++;
            if(dist>K)
                break;
        }
        
        sort(v.begin(),v.end());
        return v;
    }
};
