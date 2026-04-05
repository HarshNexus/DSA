/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
private:
void insert(Node* &head, Node* &tail, int d){
    Node* newnode= new Node(d);
    if(head==NULL){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
public:
    Node* copyRandomList(Node* head) {
        Node*clonehead=NULL;
        Node*clonetail=NULL;

        Node*temp=head;
        while(temp!=NULL){
            insert(clonehead,clonetail,temp->val);
            temp=temp->next;
        }

        unordered_map<Node*,Node*> oldtonew;
        Node* clone=clonehead;
        Node *original=head;
        while(original!=NULL){
            oldtonew[original]=clone;
            original=original->next;
            clone=clone->next;
        }

        clone=clonehead;
        original=head;
        while(clone!=NULL){
            clone->random=oldtonew[original->random];
            original=original->next;
            clone=clone->next;
        }
        return clonehead;
    }
};