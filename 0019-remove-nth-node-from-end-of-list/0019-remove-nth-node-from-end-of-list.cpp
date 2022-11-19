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
        if(n == 0){
            return head;
        }
        int Length = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            temp= temp->next;
            Length++;
        }
        if(Length  == n){
            ListNode* del = head;
            head = head->next;
            delete del;
            return head;
        }
        
        int i = 1;
         ListNode* temp2 = head;
        while(i<(Length - n)){
            temp2 = temp2->next;
            i++;
        }
        ListNode* del = temp2->next;
        temp2->next = del->next;
        delete del;
        return head;
    }
};