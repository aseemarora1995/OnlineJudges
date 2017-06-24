class Solution {
public:
    bool binarySearch(vector<int>& a, int l, int r, int t){
        if(l > r){
            return false;
        }
        int idx = (l+r) / 2;
        if(a[idx] == t){
            return true;
        }
        if(a[idx] > t){
            return binarySearch(a, l, idx-1, t);
        }
        return binarySearch(a, idx+1, r, t);
        
    }
    
    bool searchMatrix(vector<vector<int>>& m, int t) {
        if(m.empty()){
            return false;
        }
        int r = m.size();
        int c = m[0].size();
        cout << r << " " << c;
        if(!r || !c)
            return false;
        int req = INT_MAX;
        
        for(int i=0; i<r; i++){
            if(t >= m[i][0] && t <= m[i][c-1]){
                req = i;
                break;
            }
        }
        if(req == INT_MAX){
            return false;
        }
        return binarySearch(m[req], 0, c-1, t);
    }   
};
