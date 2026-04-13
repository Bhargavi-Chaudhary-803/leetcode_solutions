class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(0);

        while (head != NULL) {
            ListNode* curr = head;
            head = head->next;

            ListNode* ptr = dummy;

            while (ptr->next != NULL && ptr->next->val < curr->val) {
                ptr = ptr->next;
            }

            curr->next = ptr->next;
            ptr->next = curr;
        }

        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};