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
    ListNode* findMid(ListNode*head){
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        if(fast==NULL){
        return slow;
            
        }else{
         return slow->next;            
        }
    }
    ListNode* reverse(ListNode* head){
        if(head == NULL || head->next==NULL)return head;
        ListNode* dummy = NULL;
        while(head!=NULL){
            ListNode* nextNode = head->next;
            head->next = dummy;
            dummy = head;
            head = nextNode;
        }
        return dummy;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL || head->next==NULL)return true;
       ListNode* mid = findMid(head);
       ListNode* nextOfMid = mid;
        // mid->next = NULL;
      ListNode* newHead =  reverse(nextOfMid);
        while(newHead!=NULL){
            if(head->val!=newHead->val){
                return false;
            }
            head = head->next;
            newHead = newHead->next;
        }
        return true;
    }
};