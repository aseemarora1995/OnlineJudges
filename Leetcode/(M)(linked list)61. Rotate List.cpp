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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode *curr = head;
        ListNode *prev = curr;
        ListNode *last = NULL;
        int length = 0;
        if(head==NULL){
            return head;
        }
        
        while(curr!=NULL){
            length++;
            last = curr;
            curr = curr->next;
        }
        
        k = k % length;
        if(!k)
            return head;
            
        int setNull = length - k -1;
        
        cout << k << " " << setNull << endl;
        curr = head;
        /*
        while(k){
            curr = curr->next;
            k--;
        }
        cout << curr->val << endl;
        */
        ListNode *currNull = head;
        while(setNull){
            currNull = currNull->next;
            setNull--;
        }
        cout << currNull->val;
        cout << "\nlast: " << last->val << endl; 
        
        last->next = head;
        head = currNull->next;
        currNull->next = NULL;
        
        
        return head;
    }
};
