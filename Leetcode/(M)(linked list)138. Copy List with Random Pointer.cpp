/**
 * Definition for singly-linked list with a random pointer.
 * struct RandomListNode {
 *     int label;
 *     RandomListNode *next, *random;
 *     RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
 * };
 */
class Solution {
public:
    RandomListNode *copyRandomList(RandomListNode *head) {
        if(!head) return NULL;
        RandomListNode* temp = head;
        RandomListNode* deepHead = new RandomListNode(head->label);
        RandomListNode* temp1 = deepHead;
        while(temp){
            if(temp->next){
                int val_n = temp->next->label;
                RandomListNode* tempDeep = new RandomListNode(val_n);
                temp1->next = tempDeep;
            }
            else{temp1->next = NULL;}
            if(temp->random){
                int val_r = temp->random->label;
                RandomListNode* tempDeep = new RandomListNode(val_r);
                temp1->random = tempDeep;
            }
            else{temp1->random = NULL;}
            temp = temp->next;
            temp1 = temp1->next;
        }
        return deepHead;
    }
};
