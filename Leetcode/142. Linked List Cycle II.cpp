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
        if(!head) return NULL;
        
        ListNode* slow = head;
        ListNode* fast = head;
        int idx = 0;
        
        while(slow && fast){
            slow = slow->next;
            if(!fast->next)
                break;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }
        return NULL;
        /*if(!head) return NULL;
        set<ListNode*> s;
        
        ListNode* temp = head;
        
        while(temp){
            if(s.find(temp)!=s.end()){
                return temp;
            }
            s.insert(temp);
            temp = temp->next;
        }
        return NULL;*/
    }
};
