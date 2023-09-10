// this is gfg problem of the day of 10 Sept 2023
// problem link : https://practice.geeksforgeeks.org/problems/insert-a-node-in-a-bst/1

class Solution
{
    public:
        Node* insert(Node* node, int data) {
            
            if(!node)
            {
                Node* t=new Node(data);
                return t;
            }
            
            if(node->data==data)
                return node;
            
            if(node->data>data)
                node->left=insert(node->left,data);
            else 
                node->right=insert(node->right,data);
            
            return node;
    }

};
