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
    TreeNode* assign(vector<int> nums, int l, int r){
        if(l==r) return NULL;
        int index = (r+l)/2;
        TreeNode *root = new TreeNode(nums[index]);
        root->left = assign(nums, l, index);
        root->right = assign(nums, index+1, r);
        
        return root;
    }
    
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return assign(nums, 0, nums.size());
    }
};
