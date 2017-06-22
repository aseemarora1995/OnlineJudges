class Solution {
public:
    void binarySearch(int l, int r, int target, vector<int>& nums, vector<int>& res){
        int idx = r+l;
        idx /= 2;
        if(l > r){
            return;
        }
        if(nums[idx] == target){
            res.push_back(idx);
            binarySearch(l, idx-1, target, nums, res);
            binarySearch(idx+1, r, target, nums, res);
        }
        else if(nums[idx] > target){
            binarySearch(l, idx-1, target, nums, res);
        }
        else{
            binarySearch(idx+1, r, target, nums, res);
        }
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        binarySearch(0, nums.size()-1, target, nums, res);
        for(int i=0; i<res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
        if(res.empty()){
            res.push_back(-1);
            res.push_back(-1);
        
            return res;
        }
        else{
            sort(res.begin(), res.end());
            vector<int> final;
            final.push_back(res[0]);
            final.push_back(res[res.size()-1]);
        
            return final;
        }
        
    }
};
