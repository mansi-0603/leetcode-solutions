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
    ListNode* oddEvenList(ListNode* head) {

        // handle edge cases
        if(head == NULL || head -> next == NULL){
            return head;
        }

        ListNode* oddH = head;
        ListNode* evenH = head->next;
        ListNode* evenHead = head->next;

        
        while (oddH->next != NULL && evenH->next != NULL) {
            oddH->next = evenH->next;
            oddH = oddH->next;

            evenH->next = oddH->next;
            evenH = evenH->next;
        }
        // iss loop ke baad 2 list banegi ek even ek odd now ab que bol rha h  ki phle odd fir even hona chahiye humara reordered list so ab evenH toh last node ko point krega toh uske head ko hume starting mei hie preserve krna padega using evenHead and then connect odd with evenHead which will form our new reordered list.

        oddH->next = evenHead;

            return head;
    }
};