class Solution {
public:
    void subsetsUtil(int idx, int n, int& k, vector<int>& temp, vector<vector<int>>& res){
        if(temp.size() == k){
            res.push_back(temp);
        }
        for(int i=idx; i<n; i++){
            temp.push_back(i);
            subsetsUtil(i+1, n, k, temp, res);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> temp;
        vector<vector<int>> res;
        int call = 1;
        subsetsUtil(1, n+1, k, temp, res);
    
        return res;   
    }
};
