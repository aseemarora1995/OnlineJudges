class Solution {
public:
    int findMinUtil(int l, int r, vector<int>& nums){
        if(nums[l] < nums[r] || l==r) return nums[l];
        int idx = (l+r)/2;
        if(nums[idx] < nums[l]) return findMinUtil(l, idx, nums);
        else return findMinUtil(idx+1, r, nums);
    }
    int findMin(vector<int>& nums) {
        return findMinUtil(0, nums.size()-1, nums);    
    }
};
