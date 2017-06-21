class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0, l = 0, r = height.size()-1;
        
        while(l < r){
            area = max(area, min(height[l], height[r])*(r-l));
            (height[l] > height[r]) ? r-- : l++;
        }
        
        return area;
    }
};
