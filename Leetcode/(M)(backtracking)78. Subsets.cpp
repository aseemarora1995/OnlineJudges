class Solution {
public:
    void print(vector<int>& temp){
        for(auto i: temp){
            cout << i << " ";
        }
        cout << endl;
    }
    void subsetsUtil(int idx, vector<int>& nums, vector<int>& temp, vector<vector<int>>& res, int call){
        //cout << "function call: " << call << endl; call++;
        if(idx == nums.size()){
            res.push_back(temp);
            //cout << "adding: ";
            print(temp);
            return; 
        }
        for(int i=idx; i<nums.size(); i++){
            //cout << "pushing: " << nums[i] << endl;
            temp.push_back(nums[i]);
            subsetsUtil(i+1, nums, temp, res, call);
            //print(temp);
            //cout << "->popping: " << *(temp.end()-1) << endl;
            temp.pop_back();
            //print(temp);
        }
        //cout << "ends.." << endl;
        res.push_back(temp);
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        int call = 1;
        subsetsUtil(0, nums, temp, res, call);
    
        return res;
    }
};
