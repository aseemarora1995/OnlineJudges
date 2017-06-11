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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tempA = headA, *tempB = headB;
        set<int> setA;
        if(!tempA || !tempB) return NULL;
        while(tempA){
            setA.insert(tempA->val);
            tempA = tempA->next;
        }
        while(tempB){
            if(setA.find(tempB->val)!=setA.end())
                return tempB;
            tempB = tempB->next;
        }
        return NULL;
    }
};
