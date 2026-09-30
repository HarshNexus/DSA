class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {

        if (head == NULL || k == 1)
            return head;

        ListNode* p = head;
        ListNode* e = head;

        // Dummy node helps connect reversed groups
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        ListNode* ph = dummy;

        while (true) {

            // Find the kth node / end of current group
            e = p;

            int cnt = 0;

            while (cnt < k) {
                if (e == NULL)
                    return dummy->next;

                e = e->next;
                cnt++;
            }

            // p = first node of group
            // e = node AFTER the group

            ListNode* groupStart = p;
            ListNode* prev = e;

            // Reverse current group
            while (p != e) {

                ListNode* n = p->next;

                p->next = prev;

                prev = p;
                p = n;
            }

            // prev is now the new head of reversed group

            // Connect previous group to new head
            ph->next = prev;

            // groupStart became the tail
            ph = groupStart;

            // Move to next group
            p = e;
        }

        return dummy->next;
    }
};