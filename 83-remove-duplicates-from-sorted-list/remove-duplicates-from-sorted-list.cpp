/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
             if(head==nullptr||head->next==nullptr)
             return head;
        ListNode* priv=head;
        ListNode* curr=head->next;
        while(curr)
        {
            
            if(priv->val==curr->val)
            {
                priv->next=curr->next;
                delete curr;
                curr=priv->next;
            }
           else{
             priv=priv->next;
             curr=curr->next;
           }
        }
        return head;
    }
};