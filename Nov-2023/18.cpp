// this is gfg problem of the day of 18 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        Node* p=head;
        while(p)
        {
            Node* tmp=p->next;
            p->next=p->prev;
            p->prev=tmp;
            
            if(tmp==NULL)
                head=p;
            p=tmp;
        }
        
        return head;
    }
};
