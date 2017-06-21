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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* temp1 = head, *temp2 = head->next;
    
        head = temp2;    
        temp1->next = temp2->next;
        temp2->next = temp1;
        
        while(true){
            ListNode *prev = temp1;
            if(!temp1->next || !temp1->next->next)
                break;
            temp1 = temp1->next;
            temp2 = temp1->next;
            
            temp1->next = temp2->next;
            temp2->next = temp1;
            prev->next = temp2;
        }
        return head;
    }
};
