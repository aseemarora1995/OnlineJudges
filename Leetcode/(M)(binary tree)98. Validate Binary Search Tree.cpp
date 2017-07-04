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
    void isValidBSTUtil(TreeNode* root, vector<int>& elem){
        if(!root)
            return;
        
        isValidBSTUtil(root->left, elem);
        
        elem.push_back(root->val);
      
        isValidBSTUtil(root->right, elem);
    
    }
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        vector<int> elem;
        isValidBSTUtil(root, elem);
        
        for(int i=0; i<elem.size()-1; i++){
            if(elem[i] >= elem[i+1]){
                return false;
            }
        }
        return true;
    }
};
