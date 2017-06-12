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
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        int pVal = p->val, qVal = q->val, rVal = root->val;
        if(rVal==pVal || rVal==qVal)
            return root;
        if((rVal<pVal && rVal>qVal) || (rVal>pVal && rVal<qVal))
            return root;
        else if(rVal<pVal && rVal<qVal)
            return lowestCommonAncestor(root->right, p, q);
        else
            return lowestCommonAncestor(root->left, p, q);
    }
};
