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
    void pathSumUtil(TreeNode* root, int sum, vector<vector<int> >& output, vector<int>& temp){
        
        if(sum == 0 && !root->left && !root->right){
            output.push_back(temp);
            return; 
        }
        
        if(root->left){
            temp.push_back(root->left->val);
            pathSumUtil(root->left, sum - root->left->val, output, temp);
            temp.pop_back();
        }
        if(root->right){
            temp.push_back(root->right->val);
            pathSumUtil(root->right, sum - root->right->val, output, temp);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> > output;
        vector<int> temp;
        
        if(!root) return output;
        temp.push_back(root->val);
        pathSumUtil(root, sum - root->val, output, temp);
        
        return output;
    }
};
