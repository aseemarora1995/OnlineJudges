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
    void reorderList(ListNode* head) {
        if(!head) return;
        queue<ListNode*> q;
        stack<ListNode*> s;
        ListNode* temp = head;
        
        int length = 0;
        while(temp){
            length++;
            temp = temp->next;
        }
        
        int counter1, counter2;
        counter1 = counter2 = length/2;
        if(length%2!=0){
            counter1 = length/2 + 1;
            counter2 = length - counter1;
        }
        
        temp = head;
        
        for(int i=0; i<counter1; i++){
            q.push(temp);
            temp = temp->next;
        }
        
        for(int i=0; i<counter2; i++){
            s.push(temp);
            temp = temp->next;
        }
        
        temp = q.front();
        head = temp;
        q.pop();
        ListNode* temp1;
        
        while(!q.empty() || !s.empty()){
            if(!s.empty()){
                temp1 = s.top(); 
                s.pop();
                temp->next = temp1;
                temp = temp1;
            }
            if(!q.empty()){
                temp1 = q.front();
                q.pop();
                temp->next = temp1;
                temp = temp1;
            }
        }
        temp->next = NULL;
    }
};
