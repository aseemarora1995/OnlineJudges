class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int low = 1;
        int high = nums.size()-1;
        int count = 0;
        
        while(low < high){
            int mid = (low+high)/2;
            for(int i=0; i<nums.size(); i++){
                if(nums[i] <= mid)
                    count++;
            }
            if(count > mid)
                high = mid;
            else
                low = mid+1;
            count = 0;
        }
        return low;
        
        
        /*map<int, int> m;
        
        for(int i=0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        for(map<int, int>::iterator it=m.begin(); it!=m.end(); it++){
            if(it->second > 1){
                return it->first;
            }
        }*/
    }
};
