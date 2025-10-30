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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        
        ListNode* curr=head;
        ListNode* prev=dummy;
        while(curr)
        {
            if(curr->val==val)
            {
                prev->next=curr->next;
                delete curr;
            }
            else
            prev=curr;

            curr=prev->next;

        }
        return dummy->next;
    }
};