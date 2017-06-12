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
    // Recursive solution
    ListNode* reverseListUtil(ListNode *curr, ListNode *nexter){
        ListNode* head = curr;
        if(!nexter)
            return curr;
        head = reverseListUtil(nexter, nexter->next);
        nexter->next = curr;
        curr->next = NULL;
        return head;
    }
    ListNode* reverseList(ListNode* head){
        if(!head) return head;
        head = reverseListUtil(head, head->next);
        return head;
    }
    /*
    // Iterative solution
    ListNode* reverseList(ListNode* head) {
        ListNode *temp_prev = NULL;
        ListNode *temp_curr = head;
        ListNode *temp;
        while(temp_curr!=NULL){
            temp = temp_curr;
            temp_curr = temp_curr->next;
            temp->next = temp_prev;
            temp_prev = temp;
            
        }
        return temp_prev;
    }
    */
};
