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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp=head;
        int count=0;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        if (count==1)
        return nullptr;
        int n=count/2;
        temp=head;
       for(int i=0;i<n-1;i++)
       {
            temp=temp->next;
       }
        ListNode* prev=temp->next;

           temp->next = temp->next ? temp->next->next : nullptr;
             delete(prev);
        return head;   
         }
};