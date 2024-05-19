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
public:
    void insertCopy(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            Node* CopyNode = new Node(temp->val);
            CopyNode->next = temp->next;
            temp->next = CopyNode;
            temp = temp->next->next;
        }
        // return 
    }
    void connectRandom(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            if(temp->random){
                temp->next->random = temp->random->next;
            }else{
                temp->next->random = NULL;
            }
            temp = temp->next->next;
        }
    }
    Node* getDeep(Node* head){
        Node* temp = head;
        Node* dummy = new Node(-1);
        Node* res = dummy;
        while(temp!=NULL){
            res->next = temp->next;
            res = res->next;
            temp->next = temp->next->next;
            temp = temp->next;
        }
        return dummy->next;
    }
    Node* copyRandomList(Node* head) {
        insertCopy(head);
        connectRandom(head);
        return getDeep(head);
    }
};