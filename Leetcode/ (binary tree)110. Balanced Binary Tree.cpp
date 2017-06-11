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
public:
    int height(TreeNode* root, bool *flag){
        if(root==NULL) return 0;
        int h1 = 1 + height(root->left, flag);
        int h2 = 1 + height(root->right, flag);
        // cout << h1 << " " << h2 << endl;
        if(abs(h1-h2)>1) *flag = 0;
        return max(h1, h2);
    }
    
    bool isBalanced(TreeNode* root) {
        bool flag = 1;
        height(root, &flag);
        return flag;
        
    }
};
