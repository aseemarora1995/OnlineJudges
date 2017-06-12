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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode *head = NULL, *prev=NULL;
        while(l1 && l2){
            int temp1 = l1->val, temp2 = l2->val;
            temp1 += temp2 + carry;
            carry = temp1/10;
            ListNode *newNode = new ListNode(temp1%10);
            if(!head){
                head = newNode;
            }
            else{
                prev->next = newNode;
            }
            prev = newNode;
            l1 = l1->next; l2 = l2->next;
        }
        while(l1){
            int temp1 = l1->val;
            temp1 += carry;
            carry = temp1/10;
            ListNode *newNode = new ListNode(temp1%10);
            prev->next = newNode;
            prev = newNode;
            l1 = l1->next;
        }
        while(l2){
            int temp1 = l2->val;
            temp1 += carry;
            carry = temp1/10;
            ListNode *newNode = new ListNode(temp1%10);
            prev->next = newNode;
            prev = newNode;
            l2 = l2->next;
        }
        if(carry){
            ListNode *newNode = new ListNode(carry);
            prev->next = newNode;
        }
        return head;
    }
};
