class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int, int> myMap;
        if(nums.empty()) return false;
        for(int i=0; i<nums.size(); i++){
            int key = nums[i];
            if(myMap.find(key)==myMap.end())
                myMap[key] = i;
            else{
                if(abs(myMap[key] - i) <= k)
                    return true;
                else{
                    myMap[key] = i;
                }
            }
        }
        return false;    
    }
};
