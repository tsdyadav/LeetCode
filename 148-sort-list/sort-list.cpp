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
    ListNode* createLinkedList(const vector<int>& nums) {
    if (nums.empty()) return nullptr;

    ListNode* head = new ListNode{nums[0], nullptr};
    ListNode* temp = head;

    for (int i = 1; i < nums.size(); i++) {
        temp->next = new ListNode{nums[i], nullptr};
        temp = temp->next;
    }

    return head;
}
public:
    ListNode* sortList(ListNode* head) {
        vector<int>nums;
        ListNode* temp=head;
        while(temp)
        {
            nums.push_back(temp->val);
            temp=temp->next;
        }
        // sort array
        sort(nums.begin(),nums.end());
        // creating the node for the sorted array
        return createLinkedList(nums);

    }
};