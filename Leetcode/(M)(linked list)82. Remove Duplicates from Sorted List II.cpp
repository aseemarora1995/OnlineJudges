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
    ListNode* deleteDuplicates(ListNode* head) {
        
        map<int, int> myMap;
        ListNode* temp = head;
        ListNode* idx = NULL;
        if(!head)
            return head;
        
        while(temp){
            myMap[temp->val]++;
            temp = temp->next;
        }
        
        temp = head;
        while(temp){
            int key = temp->val;
            if(myMap[key] < 2){
                if(!idx){
                    idx = head;
                }
                else{
                    idx = idx->next;
                }
                idx->val = key;
            }
            temp = temp->next;
        }
        if(idx)
            idx->next = NULL;
        else
            return idx;
        return head;
        
        
    }
};
