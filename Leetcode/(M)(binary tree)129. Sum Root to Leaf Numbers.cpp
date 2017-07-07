/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
private: 
    int finalSum = 0;
public:
    void sumNumbersUtil(TreeNode* root, int sum){
        if(!root) return;
        sum += root->val;
        if(!root->left && !root->right){ 
            finalSum += sum;
            return;
        }
        
        sumNumbersUtil(root->left, sum*10);
        sumNumbersUtil(root->right, sum*10);
    }
    
    int sumNumbers(TreeNode* root) {
        if(!root) return 0;
        int sum = 0;
        sumNumbersUtil(root, sum);
        
        return finalSum;
    }
};
