class Solution {
public:
    int count(ListNode* head) {
        int co = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
            co++;
            temp = temp->next;
        }
        return co;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int allnode = count(head);

        // If we need to remove the head
        if (n == allnode) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
            return head;
        }

        allnode = allnode - n;
        ListNode* prev = nullptr;
        ListNode* curr = head;

        while (allnode--) {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;
        return head;
    }
};
