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
    int bs(int val, vector<int>& inorder){
        for(int i=0; i<inorder.size(); i++){
            if(inorder[i] == val)
                return i;
        }
    }
    
    TreeNode* buildTreeUtil(int l, int r, int &preidx, vector<int>& preorder, vector<int>& inorder){
        // if(l > r || preidx >= preorder.size()) return NULL;
        //cout << "preorder: " << preidx << " --- " << preorder[preidx]<< endl;
        int inidx = bs(preorder[preidx], inorder);
        //cout << "inorder: " << inidx << " --- " << inorder[inidx] << endl;
        preidx++;
        TreeNode* root = new TreeNode(inorder[inidx]);
        
        if(l <= inidx -1 && preidx < preorder.size()){
            // cout << inidx << " one\n";
            root->left = buildTreeUtil(l, inidx-1, preidx, preorder, inorder);
        }
        if(inidx + 1 <= r && preidx < preorder.size()){ 
            // cout << inidx << " two\n";
            root->right = buildTreeUtil(inidx+1, r, preidx, preorder, inorder);
        }
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int preidx = 0, inidx;
        if(preorder.empty()) return NULL;
        TreeNode* root = buildTreeUtil(0, inorder.size()-1, preidx, preorder, inorder);
        
        return root;
    }
};
