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
    
    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        if(!root->left && !root->right) return 1;
        if(!root->left && root->right) return 1 + minDepth(root->right);
        if(root->left && !root->right) return 1 + minDepth(root->left);
        else return 1 + min(minDepth(root->right), minDepth(root->left));
    }
};
