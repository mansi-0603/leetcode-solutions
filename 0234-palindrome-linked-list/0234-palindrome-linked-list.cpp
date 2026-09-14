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
    ListNode* reverseList(ListNode* head) {
        ListNode* next = NULL;
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        int size = 0;
        ListNode* slow = head;
        ListNode* fast = head;

        // middle point.
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // reversing second half of List
        ListNode* secondHalf;

        if (fast == NULL) {
            secondHalf = reverseList(slow);
        } else {
            secondHalf = reverseList(slow->next);
        }

        // now the comparison
        ListNode* first = head;
        ListNode* second = secondHalf;

        while (second != NULL) {
            if (first->val != second->val) {
                return false;
            }
            first = first->next;
            second = second->next;
        }
        return true;
    }
};