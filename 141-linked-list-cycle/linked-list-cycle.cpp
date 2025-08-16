/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
       bool check(vector<ListNode*>&visited,ListNode* curr)
    {
        for(int i=0;i<visited.size();i++)
        {
            if(visited[i]==curr)
            return 1;
        }
        return 0;
    }
public:
    bool hasCycle(ListNode *head) {
           ListNode* curr=head;
        vector<ListNode*>visited;
        while(curr!=nullptr)
        {
            if(check(visited,curr))
            return 1;
            visited.push_back(curr);
            curr=curr->next;
            
        }
        return 0;
        
    }
};