class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        return mergeSort(head);
    }

    ListNode* mergeSort(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* mid = slow->next;
        slow->next = NULL;

        ListNode* left = mergeSort(head);
        ListNode* right = mergeSort(mid);

        return merge(left, right);
    }

    ListNode* merge(ListNode* a, ListNode* b) {
        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (a != NULL && b != NULL) {
            if (a->val <= b->val) {
                tail->next = a;
                a = a->next;
            } else {
                tail->next = b;
                b = b->next;
            }
            tail = tail->next;
        }

        if (a != NULL) tail->next = a;
        else tail->next = b;

        return dummy.next;
    }
};