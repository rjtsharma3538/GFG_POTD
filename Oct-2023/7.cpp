// this is gfg problem of the day of 7 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/pairwise-swap-elements-of-a-linked-list-by-swapping-data/1

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(!head||!head->next)
            return head;
        Node* p=head,*q=head->next,*r;
        while(p&&q)
        {
            p->next=q->next;
            q->next=p;
            if(p==head)
                head=q;
            else 
                r->next=q;
            r=p;
            p=p->next;
            if(p)
                q=p->next;
        }
        
        return head;
    }
};
