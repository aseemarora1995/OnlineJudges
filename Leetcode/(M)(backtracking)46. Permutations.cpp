class Solution {
public:
    void findP(vector<int>& nums, set<int>& idxs, vector<int>& temp, vector<vector<int> > &res){
        for(int i=0; i<nums.size(); i++){
            cout << nums[i] << endl;
            if(idxs.find(nums[i]) == idxs.end()){
                cout << "called\n";
                idxs.insert(nums[i]);
                temp.push_back(nums[i]);
                if(temp.size() == nums.size()){
                    res.push_back(temp);
                    idxs.erase(temp.back());
                    temp.pop_back();
                    break;
                }
                findP(nums, idxs, temp, res);
                idxs.erase(temp.back());
                temp.pop_back();
            }
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int> > res;
        set<int> idxs;
        set<vector<int> > checkUnique;
        findP(nums, idxs, temp, res);       
        return res;
    }
};
