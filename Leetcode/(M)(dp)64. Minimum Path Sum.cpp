class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int> > res(m, vector<int> (n));
        
        res[0][0] = grid[0][0];
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 && j==0){
                    continue;
                }
                if(i==0){
                    res[i][j] = res[i][j-1] + grid[i][j];
                }
                else if(j==0){
                    res[i][j] = res[i-1][j] + grid[i][j];
                }
                else{
                    res[i][j] = min(res[i-1][j], res[i][j-1]) + grid[i][j];
                }
            }
        }
        return res[m-1][n-1];
    }
};
