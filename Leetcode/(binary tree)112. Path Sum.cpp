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
    bool findSum(TreeNode *root, int temp, int original){
        if(root==NULL) return false;
        int sum = root->val + temp;
        cout << sum << endl;
        if(sum == original && !root->left && !root->right) return true;
        return findSum(root->left, sum, original) || findSum(root->right, sum, original);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        return findSum(root, 0, sum);
    }
};
