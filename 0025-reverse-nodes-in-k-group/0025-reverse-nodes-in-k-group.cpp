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
    ListNode* reverseKGroup(ListNode* head, int k) {
       if(head==NULL || head->next==NULL) return head;

       ListNode*curr=head;
       ListNode* prev=NULL;
      ListNode* n=NULL;

      int cnt=0;
      ListNode*temp=head;
      while(temp!=NULL){
        temp=temp->next;
        cnt++;
      }

      if(cnt<k) return head;
        int c=0;
      while(curr!=NULL && c<k){
        n=curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
        c++;
      }
      if(n!=NULL) head->next=reverseKGroup(n,k);

      return prev;
    }
};