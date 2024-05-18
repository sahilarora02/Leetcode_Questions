/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
       unordered_map<ListNode*, int> mpp;
        while(head!=NULL){
            if(mpp[head]){
                return head;
            }
            mpp[head]++;
            head = head->next;
        }
        return head;
    }
};