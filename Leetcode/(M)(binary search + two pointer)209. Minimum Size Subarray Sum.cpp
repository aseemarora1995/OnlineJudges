class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.empty()) return 0;
        int i, j;
        j = i = nums.size()-1;
        int sum = nums[i];
        int len = INT_MAX;
        while(i>-1 && j>-1){
            if(sum >= s){
                if(i-j+1 < len) 
                    len = i-j+1;
                sum -= nums[i--];
            }
            if(sum < s){
                sum += nums[--j];
            }
        }
        if(sum >= s){
            if(i-j+1 < len) 
                len = i-j+1;
        }
        
        return (len!=INT_MAX) ? len : 0;
    }
};
