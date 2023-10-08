// this is gfg problem of the day of 9 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/insert-in-a-sorted-list/1

class Solution{
  public:

    Node *sortedInsert(struct Node* head, int data) {
        Node* t=new Node(data);
        if(head->data>data)
        {
            t->next=head;
            head=t;
        }
        else 
        {
            Node* p=head,*q=head->next;
            while(q)
            {
                if(q->data>data)
                {
                    p->next=t;
                    t->next=q;
                    break;
                }
                p=p->next;
                q=q->next;
            }
            
            if(!q)
                p->next=t;
        }
        
        return head;
    }
};
