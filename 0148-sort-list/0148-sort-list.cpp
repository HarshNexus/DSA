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
private:
ListNode* merge(ListNode*& l, ListNode*& r) {

    if (l == NULL)
        return r;

    if (r == NULL)
        return l;

    ListNode* ans = new ListNode(-1);
    ListNode* t = ans;

    while (l != NULL && r != NULL) {

        if (l->val < r->val) {
            t->next=l;
            t=l;
            l=l->next;
        }
        else {
            t->next=r;
            t=r;
            r=r->next;
        }
    }

    while (l != NULL) {
           t->next=l;
            t=l;
            l=l->next;
        }

    while (r != NULL) {
            t->next=r;
            t=r;
            r=r->next;
        }

   ans=ans->next;
    return ans;
}
public:
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;

        ListNode* slow = head;
        ListNode* fast = head->next;
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* r = slow->next;
        ListNode* l = head;
        slow->next = NULL;
        l = sortList(head);
        r = sortList(r);

        ListNode* ans = merge(l, r);
        return ans;
    }
};