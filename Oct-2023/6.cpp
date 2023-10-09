// this is gfg problem of the day of 9 Oct 2023
// problem link : https://practice.geeksforgeeks.org/problems/given-a-linked-list-reverse-alternate-nodes-and-append-at-the-end/1

class Solution
{
    public:
    
    void reverse(struct Node* &head)
    {
        struct Node* r=NULL,*q=NULL,*p=head;
        while(p)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        head=q;
    }
    
    void rearrange(struct Node *odd)
    {
        
        if(!odd||!odd->next)
            return;
        struct Node *fst=odd,*sec=odd->next,*p=odd,*q=odd->next;
        int cnt=0;
        
        while(q)
        {
            cnt++;
            if(p->next->next==NULL)
            {
                p->next=NULL;
                break;
            }
            p->next=q->next;
            p=q;
            q=q->next;
        }
        
        reverse(sec);
        
        if(cnt%2)
            p->next=sec;
        else 
            q->next=sec;
    }
};
