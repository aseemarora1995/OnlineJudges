class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size() == 1){
            return;
        }
        int r = nums.size() - 1;
        int l = r - 1;
        
        while(l >= 0){
            if(nums[r] > nums[l]){
                //swap(nums[r], nums[l]);
                break;
            }
            l--; 
            r--;
        }
        sort(nums.begin()+r, nums.end());
        while(r < nums.size() && l>=0){
            if(nums[r] > nums[l]){
                swap(nums[r], nums[l]);
                break;
            }
            r++;
        }
    }
};
