class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector<vector<int> > res(m, vector<int> (n));
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 && j==0){
                    if(!obstacleGrid[i][j])
                        res[i][j] = 1;
                    else{
                        return res[m-1][n-1];
                    }
                }
                else if(i==0){
                    if(!obstacleGrid[i][j] && res[i][j-1])
                        res[i][j] = 1;
                }
                else if(j==0){
                    if(!obstacleGrid[i][j] && res[i-1][j])
                        res[i][j] = 1;
                }
                else{
                    if(!obstacleGrid[i][j])
                        res[i][j] = res[i][j-1] + res[i-1][j];
                }
            }
        }
        return res[m-1][n-1];
    }
};
