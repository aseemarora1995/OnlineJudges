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
    void print(ListNode* head){
        while(head){
            cout << head->val << " ";
            head = head->next;
        }
        cout << endl;
    }
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next) return head;
        ListNode *temp = head;
        ListNode *one = NULL;
        ListNode *two = NULL;
        
        while(temp){
            if(temp->val < x){
                one = temp;
            }
            if(temp->val >= x){
                two = temp;
                // temp = one;
                break;
            }
            temp = temp->next;
        }
        /*
        if(one){
            cout << "one: " << one->val << endl;
        }
        else{
            cout << "one is NULL\n";
        }
        if(two){
            cout << "two: " << two->val << endl;
        }
        else{
            cout << "two is NULL\n";
        }
        */
        if(!two) return head;
        
        ListNode *prev = one;
        ListNode *next = two->next;
        ListNode *t = temp;
        
        
        
        while(temp){
            cout << temp->val << "<--\n";
            prev = temp;
            temp = next;
            if(!temp) break;
            next = temp->next;
            
            if(temp->val < x){
                if(two == head){
                    head = temp;
                }
                else{
                    one->next = temp;
                }
                one = temp;
                temp->next = two;
                prev->next = next;
                temp = prev;
                print(head);
            }
        }
        
        return head;
    }
};
