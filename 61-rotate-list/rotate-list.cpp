class Solution {
public:

    int allnodes(ListNode* head)
    {
        int count=0;
        ListNode* temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        return count;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        int count= allnodes(head);
        ListNode* prev=NULL;
        ListNode* curr=head;

        if(head==NULL || head->next==NULL)  // ✅ safety check
            return head;

        if(k==0)  // ✅ no rotation
            return head;

        k = k % count;   // ✅ normalize k
        if(k == 0)       // ✅ if k is multiple of count, no rotation
            return head;

        count -= k;
        while(count--)
        {
            prev=curr;
            curr=curr->next;
        }

        prev->next=NULL;
        ListNode* tail=curr;
        while(tail->next!=nullptr)
        {
            tail=tail->next;
        }
        tail->next=head;
        head=curr;
        return head;
    }
};
