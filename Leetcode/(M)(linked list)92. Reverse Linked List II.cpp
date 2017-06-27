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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *prev = head;
        ListNode *one = head;
        ListNode *two = head;
        ListNode* temp = head;
        
        if(!head->next){
            return head;
        }
        
        n--; m--;
        
        while(m > 0){
            prev = one;
            one = one->next;
            two = one->next;    
        
            m--;
            n--;
        }
        
        ListNode *curr = one, *next = one->next;
        ListNode *temp_p = one;
        while(n > 0){
            
            temp_p = curr;
            curr = next;
            next = next->next;
            curr->next = temp_p;
            two = next;
            n--;
        }
        
        
        if(one == two){
            return head;
        }
        
        one->next = next;
        if(prev==one){
            head = curr;
        }
        else{
            prev->next = curr;
        }
        
        return head;
    }
};
