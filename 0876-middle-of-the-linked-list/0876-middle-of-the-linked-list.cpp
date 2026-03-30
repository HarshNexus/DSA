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
int length(ListNode* head){
    ListNode* temp=head;
    int cnt=0;
    while(temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}
public:
    ListNode* middleNode(ListNode* head) {
        int l=length(head);
        ListNode* temp=head;
        int cnt=0;
        while(cnt<(l/2)){
            temp=temp->next;
            cnt++;
        }
        return temp;
    }
};