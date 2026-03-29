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
    int length(ListNode* head){
        ListNode* temp=head;
        int cnt=0;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        return cnt;
    }
public:
    ListNode* middleNode(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
            int l=length(head);
            int cnt=0;
            ListNode* temp=head;
            while(cnt<((l/2))){
                temp=temp->next;
                head=temp;
                cnt++;
            }
            return head;
    }
};