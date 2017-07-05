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
    vector<vector<int>> levelOrder(TreeNode* root){
        vector<vector<int> > output;
        if(!root) return output;
        queue<TreeNode*> q;
        
        q.push(root);
        q.push(NULL);
        
        vector<int> sub;
        
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp==NULL){
                cout << "one\n";
                output.push_back(sub);
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
        return output;
    }
    /*
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<TreeNode*> > res;
        vector<vector<int> > output;
        if(!root) return output;
        vector<TreeNode*> temp;
        
        temp.push_back(root);
        
        while(!temp.empty()){
            res.push_back(temp);
            vector<TreeNode*> temp1 = temp;
            temp.clear();
            for(int i=0; i<temp1.size(); i++){
                if(temp1[i]->left)
                    temp.push_back(temp1[i]->left);
                if(temp1[i]->right)
                    temp.push_back(temp1[i]->right);       
            }
        }
        
        for(int i=0; i<res.size(); i++){
            vector<int> temp2;
            for(vector<TreeNode*>::iterator it=res[i].begin(); it!=res[i].end(); it++){
                temp2.push_back((*it)->val);
            }
            output.push_back(temp2);
            temp2.clear();
        }
        
        return output;
    }
    */
};
