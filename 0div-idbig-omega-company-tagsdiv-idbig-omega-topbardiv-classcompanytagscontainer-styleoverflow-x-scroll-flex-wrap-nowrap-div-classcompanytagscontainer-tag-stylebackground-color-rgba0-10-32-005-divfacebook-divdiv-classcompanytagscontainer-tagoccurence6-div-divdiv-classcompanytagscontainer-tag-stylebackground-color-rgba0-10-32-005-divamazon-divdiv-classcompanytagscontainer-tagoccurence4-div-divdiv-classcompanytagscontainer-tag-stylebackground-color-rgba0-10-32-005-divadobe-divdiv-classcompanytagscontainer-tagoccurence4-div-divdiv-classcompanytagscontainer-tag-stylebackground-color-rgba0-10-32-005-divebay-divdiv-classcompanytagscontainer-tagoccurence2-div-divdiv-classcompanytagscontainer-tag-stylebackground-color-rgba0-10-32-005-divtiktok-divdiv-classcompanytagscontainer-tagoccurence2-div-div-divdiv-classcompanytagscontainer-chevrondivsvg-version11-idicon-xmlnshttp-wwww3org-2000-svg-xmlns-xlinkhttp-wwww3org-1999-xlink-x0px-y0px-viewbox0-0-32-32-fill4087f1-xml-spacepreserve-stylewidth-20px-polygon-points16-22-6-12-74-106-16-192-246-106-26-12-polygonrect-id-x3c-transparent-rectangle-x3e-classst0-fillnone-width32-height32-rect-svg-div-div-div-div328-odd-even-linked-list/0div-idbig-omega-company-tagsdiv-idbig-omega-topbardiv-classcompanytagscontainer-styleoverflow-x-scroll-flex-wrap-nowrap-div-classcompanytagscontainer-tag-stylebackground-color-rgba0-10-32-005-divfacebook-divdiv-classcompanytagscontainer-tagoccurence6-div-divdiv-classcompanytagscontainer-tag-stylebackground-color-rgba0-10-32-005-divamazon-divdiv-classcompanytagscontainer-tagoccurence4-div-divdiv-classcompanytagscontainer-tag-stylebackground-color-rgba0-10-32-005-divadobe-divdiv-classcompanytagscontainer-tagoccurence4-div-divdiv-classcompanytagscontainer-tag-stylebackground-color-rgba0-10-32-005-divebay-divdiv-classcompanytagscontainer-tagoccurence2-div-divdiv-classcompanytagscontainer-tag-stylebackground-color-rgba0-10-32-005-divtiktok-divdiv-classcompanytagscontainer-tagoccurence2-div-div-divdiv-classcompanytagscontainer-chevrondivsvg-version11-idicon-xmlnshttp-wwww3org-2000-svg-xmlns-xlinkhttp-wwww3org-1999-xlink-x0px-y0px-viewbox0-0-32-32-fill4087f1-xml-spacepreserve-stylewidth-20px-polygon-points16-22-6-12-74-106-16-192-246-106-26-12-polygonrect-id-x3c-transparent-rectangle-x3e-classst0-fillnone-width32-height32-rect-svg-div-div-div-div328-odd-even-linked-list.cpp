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
    ListNode* oddEvenList(ListNode* head) {
        if(!head)return head;
        int cnt = 0;
        ListNode* end = head;
        while(end->next!=NULL){
            end = end->next;
            cnt++;
        }
        cnt = cnt&1?cnt/2+1 : cnt/2;
        ListNode*temp = head;
        while(cnt--){
            end->next = temp->next;
            temp->next = temp->next->next;
            end->next->next  = NULL;
            temp = temp->next;
            end = end->next;
        }
        return head;
    }
};