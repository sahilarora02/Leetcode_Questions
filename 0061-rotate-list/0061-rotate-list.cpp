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
   
    ListNode* rotateRight(ListNode* head, int k) {
       
        if(head == NULL || head->next==NULL || k == 0){
            return head;
        }
        ListNode* temp  = head;
        int len = 0;
        while(temp->next!=NULL){
            len++;
            temp = temp->next;
        }
            len++;
           temp->next = head;
        temp = temp->next;
        k = k%len;
        int val = len-k-1;
        while(val){
            val--;
            temp = temp->next;
        }
        head = temp->next;
        temp->next= NULL;
        return head;
    }
};