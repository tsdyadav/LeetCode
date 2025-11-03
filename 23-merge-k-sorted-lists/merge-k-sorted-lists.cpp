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
    ListNode* mergeKLists(vector<ListNode*>& lists) {

       vector<int>temp;
       for(auto &i: lists)
       {
        while(i)
        {
            temp.push_back(i->val);
            i=i->next;
        }
       }
       ListNode* dummy=new ListNode(0);
       ListNode* tail=dummy;
       sort(temp.begin(),temp.end());
       for(int i : temp) 
       {
        tail->next=new ListNode(i);
        tail=tail->next;
       }
       return dummy->next;
    }
};