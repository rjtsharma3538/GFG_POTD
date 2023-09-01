// this is gfg problem of the day of 1 Sep 2023
// problem link : https://practice.geeksforgeeks.org/problems/leftmost-and-rightmost-nodes-of-binary-tree/1

void printCorner(Node *root)
{
    queue<Node*> q;
    q.push(root);
    while(!q.empty())
    {
        int sz=q.size();
        for(int i=0;i<sz;i++)
        {
            Node* node=q.front();
            q.pop();
            
            if(i==0)
                cout<<node->data<<" ";
            else if(i==sz-1)
                cout<<node->data<<" ";
            
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
    }
}
