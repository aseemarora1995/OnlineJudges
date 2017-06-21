class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int> > res;
        
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size();){
            int l = i+1, r = nums.size()-1;
            int req = -nums[i];
            while(l < r){
                int sum = nums[l] + nums[r];
                if(sum == req){
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    res.push_back(temp);
                    
                    int one = nums[l], two = nums[r];
                    while(nums[l] == one){
                        l++;
                    }
                    while(nums[r] == two){
                        r--;
                    }
                }
                else if(sum > req){
                    int one = nums[r];
                    while(nums[r] == one)
                        r--;
                }
                else{
                    int one = nums[l];
                    while(nums[l] == one)
                        l++;
                }
            }
            int three = nums[i];
            while(three == nums[i]){
                i++;
            }
        }
        return res;
    }
};
