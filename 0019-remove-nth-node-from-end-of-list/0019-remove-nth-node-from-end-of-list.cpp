class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        ListNode* curr = head;
        ListNode* prev = NULL;

        int sizeLL = 0;

        // 1. Size calculate
        while (curr != nullptr) {
            curr = curr->next;
            sizeLL++;
        }

        int curr_Idx = 0;
        curr = head;

        // 2. Target node find
        while (curr != NULL) {

            if (sizeLL - curr_Idx == n) {

                // 3. Head delete karna hai
                if (curr == head) {
                    head = curr->next;
                }

                // 4. Normal node delete karna hai
                else {
                    prev->next = curr->next;
                }

                break;
            }

            // 5. Normal traversal
            prev = curr;
            curr = curr->next;
            curr_Idx++;
        }

        return head;
    }
};