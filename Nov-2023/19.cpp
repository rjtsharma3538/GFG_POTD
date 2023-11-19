// this is gfg problem of the day of 19 Nov 2023
// problem link : https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1

class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        // code goes here.
        Node* head=NULL,*last=NULL;
        
        while(head1&&head2)
        {
            if(head1->data==head2->data)
            {
                Node* t=new Node(head1->data);
                if(head==NULL)
                {
                    head=t;
                    last=t;
                }
                else 
                {
                    last->next=t;
                    last=t;
                }
                head1=head1->next;
                head2=head2->next;
            }
            
            else if(head1->data<head2->data)
                head1=head1->next;
            else 
                head2=head2->next;
        }
        
        return head;
    }
};
