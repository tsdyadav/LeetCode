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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head) return head;
        ListNode* fast=head;
        ListNode* slow=head;
        while(k>1)
        {
            fast=fast->next;
            k--;
        }
        ListNode* curr= fast;
        while(curr->next)
        {
            slow=slow->next;
            curr=curr->next;
        }
        swap(slow->val,fast->val);
        return head;
    }
};