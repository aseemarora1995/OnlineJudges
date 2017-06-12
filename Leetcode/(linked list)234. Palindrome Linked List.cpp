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
    bool isPalindrome(ListNode* head) {
        if(head==NULL) return true;
        ListNode *temp = head;
        stack<int> myS;
        while(temp!=NULL){
            myS.push(temp->val);
            temp = temp->next;
        }
        temp = head;
        while(!myS.empty()){
            if(myS.top()!=temp->val)
                return false;
            myS.pop();
            temp = temp->next;
        }
        return true;
    }
};
