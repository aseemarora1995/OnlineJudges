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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> > output;
        if(!root) return output;
        queue<TreeNode*> q;
        stack<vector<int> > s;
        q.push(root);
        q.push(NULL);
        
        vector<int> sub;
        
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp==NULL){
                cout << "one\n";
                s.push(sub);
                //output.push_back(sub);
                sub.clear();
                if(!q.empty())
                    q.push(NULL);
            }
            else{
                cout << "two\n";
                sub.push_back(temp->val);
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
        }
        while(!s.empty()){
            output.push_back(s.top());
            s.pop();
        }
        return output;
    }
};
