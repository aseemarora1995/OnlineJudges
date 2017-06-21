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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        stack<ListNode*> s;
        ListNode *temp = head;
        
        while(temp){
            s.push(temp);
            temp = temp->next;
        }
        
        for(int i=0; i<n; i++){
            temp = s.top();
            s.pop();
        }
        
        if(head == temp){
            cout << "one\n";
            head = temp->next;
            delete temp;
            temp = NULL;
        }
        else if(temp->next == NULL){
            ListNode *temp1 = s.top();
            temp1->next = NULL;
            delete temp;
            temp = NULL;
            
        }
        else{
            cout << "three\n";
            ListNode *tempDel = temp->next;
            temp->val = tempDel->val;
            temp->next = tempDel->next;
            delete tempDel;
            tempDel = NULL;
        }
        return head;
    }
};
