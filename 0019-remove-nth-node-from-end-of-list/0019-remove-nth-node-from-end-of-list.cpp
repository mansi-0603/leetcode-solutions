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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        ListNode* prev = nullptr;
        int size = 0;

        // phle size nikalo list ka
        while (curr != nullptr) {
            curr = curr->next;
            size++;
        }

        // curr ko wps se initialize kro head
        curr = head;

        // curr index niklo
        int currIdx = 0;

        // wps se traverse kro or target find kro
        while (curr != nullptr) {

            if (size - currIdx == n) {
                // agr head hie target hua toh
                if (curr == head) {
                    head = curr -> next;
                }else{
                    prev -> next = curr -> next;
                }
                // target milne ke baad jb node dlt kr diye h toh break krke return kro direct
                break;
            }

            // normal traverse kro jb tk target na mile
            prev = curr;
            curr = curr -> next;
            currIdx++;
        }
        return head;
    }
};