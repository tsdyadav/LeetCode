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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> vals;   // store all node values
        while (head) {
            vals.push_back(head->val);
            head = head->next;
        }

        vector<int> ans(vals.size(), 0);  // initialize all as 0
        stack<int> st;  // store indices

        for (int i = 0; i < vals.size(); i++) {
            // while current value > stack top value
            while (!st.empty() && vals[i] > vals[st.top()]) {
                ans[st.top()] = vals[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};
