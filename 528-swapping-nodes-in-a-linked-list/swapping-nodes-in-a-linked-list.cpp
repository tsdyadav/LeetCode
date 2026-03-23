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
        int len=0;
        ListNode* temp=head;
        while(temp)
        {
            len++;
            temp=temp->next;
        }
        len=len-k+1;
        temp=head;
        ListNode* first=NULL;
        ListNode* sec=NULL;
        while(k>1)
        {
            temp=temp->next;
            k--;
        }
        first=temp;
        temp=head;
        while(len>1)
        {
            temp=temp->next;
            len--;
        }
        sec=temp;
        swap(first->val,sec->val);
        return head;


    }
};