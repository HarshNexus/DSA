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
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* ptr = new ListNode(-1);
        ListNode* p = ptr;
        ListNode* a = head;
        ListNode* b = head->next;
        while (b != NULL) {
            ListNode* b1 = b->next;

            p->next = b;
            b->next = a;
            a->next = b1;
            p = a;

            if (b1 != NULL && b1->next != NULL) {
                a = b1;
                b = b1->next;
            } else {
                break;
            }
        }
        return ptr->next;
    }
};