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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* temp = head;
        int n = 0;
        while(temp!=NULL){
            temp=temp->next;
            n++;
        }
        if(n == 0 || n == 1){
            return NULL;
        }
        // if(n == 2){
        //     ListNode* del = head->next;
        //     head->next=head->next;
        //     delete del;
        //     return head;
        // }
       ListNode* temp2 = head;
        int i = 0 ;
     while(i<n/2 - 1){
         temp2 = temp2->next;
         i++;
     }
        ListNode* del = temp2->next;
        temp2->next = del->next;
        delete del;
        return head;
    }
};