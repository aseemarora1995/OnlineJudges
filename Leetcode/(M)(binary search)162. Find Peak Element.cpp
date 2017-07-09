class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int l=0, r=nums.size()-1;
        int idx;
        
        while(l<r){
            cout << l << " " << r << endl;
            idx = (l+r)/2;
            
            if(nums[idx] < nums[idx+1]){ // idx in increasing order
                l = idx+1;
            }
            else if(nums[idx] > nums[idx+1]){ // idx in decreasing order
                r = idx;
            }
        }
        cout << l;
        return l;
    }
};
