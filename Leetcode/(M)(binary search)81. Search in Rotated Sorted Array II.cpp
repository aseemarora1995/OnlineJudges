class Solution {
public:
    int binarySearch(int l, int r, int target, vector<int>& nums){
        int idx = r+l;
        idx /= 2;
        if(l > r){
            return -1;
        }
        if(nums[idx] == target){
            return idx;
        }
        else if(nums[idx] > target){
            return binarySearch(l, r-1, target, nums);
        }
        else{
            return binarySearch(l+1, r, target, nums);
        }
    }
    
    bool search(vector<int>& nums, int target) {
        if(nums.empty()){
            return false;
        }
        int l = 0, r = l + 1;
        
        while(r != nums.size()){
            if(nums[r] < nums[l]){
                break;
            }
            l++;
            r++;
        }
        cout << "pivot: " << r << endl;
        
        int res = binarySearch(0, r-1, target, nums);
        if(res == -1)
            res = binarySearch(r, nums.size()-1, target, nums);
        
        cout << "res: " << res << endl;
        if(res == -1) return false;
        return true;
    }
};
