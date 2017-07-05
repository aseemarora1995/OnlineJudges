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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int> > output;
        if(!root) return output;
        queue<TreeNode*> q;
        
        q.push(root);
        q.push(NULL);
        
        vector<int> sub;
        int idx = 1;      
        while(!q.empty()){
            TreeNode* temp = q.front();
            q.pop();
            if(temp==NULL){
                idx++;
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
        for(int i=0; i<output.size(); i++){
            if(i%2!=0){
                //reverse(output[i].begin(), output[i].reverse());
                int length = output[i].size();
                for(int j=0; j<length/2; j++){
                    swap(output[i][j], output[i][length-1-j]);
                }
            }
        }
        return output;    
    }
};
