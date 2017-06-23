class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size() == 1){
            return true;
        }
        vector<int> temp(nums.size());
        
        temp[0] = nums[0];
        
        for(int i=1; i<nums.size(); i++){
            if(temp[i-1] >= nums.size()-1){
                return true;
            }
            if(temp[i-1] >= i){
                temp[i] = max(i+nums[i], temp[i-1]);
            }
            else{
                temp[i] = i;
            }
            cout << temp[i] << endl;
        }
        
        return false;
    }
};
