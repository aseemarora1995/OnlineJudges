class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        if(m.empty()) return false;
        int i = m.size()-1, j = 0;
        cout << i << " " << j << endl;
        int maxim = m[0].size()-1;
        while(i>=0 && j<=maxim){
            if(t == m[i][j])
                return true;
            if(m[i][j] < t)
                j++;
            else
                i--;
        }
        return false;
    }
};
