/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {

public:
    int count(ListNode *head)
    {
        ListNode* temp=head;
        int len=0;
        while(temp)
        {
            len++;
            temp=temp->next;
        }
        return len;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int len1=count(headA);
        int len2=count(headB);
        int len;
        if(len1>len2)
        {
            len=len1-len2;
            while(len!=0)
            {headA=headA->next;
            len--;
            }
        }
        else
        {
        len=len2-len1;
        while(len!=0)
            {headB=headB->next;
            len--;
            }
        }
        while(headA&&headB)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return nullptr;
    
    }
};
