class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> myMap;
        
        for(int i=0; i<nums.size(); i++){
            myMap[nums[i]]++;
        }
        nums.clear();
        for(map<int, int>::iterator it=myMap.begin(); it!=myMap.end(); it++){
            if(it->second > 1)
                nums.push_back(it->first);
            nums.push_back(it->first);
        }
         
        return res;
    }
};
