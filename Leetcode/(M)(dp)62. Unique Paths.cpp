class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int> > res(m, vector<int> (n));
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(i==0 || j==0){
                    res[i][j] = 1;
                }
                else{
                    res[i][j] = res[i][j-1] + res[i-1][j];
                }
            }
        }
        return res[m-1][n-1];
    }
    /*
    void findPath(int x, int y, int m, int n, int& numOfPaths){
       //cout << x << " " << y << endl;
       //cout << numOfPaths << endl;
       if(x > m || y > n){
           return;
       }
       if(x==m && y==n){
           numOfPaths += 1;
           return;
       } 
       findPath(x+1, y, m, n, numOfPaths);
       findPath(x, y+1, m, n, numOfPaths);
    }
    
    int uniquePaths(int m, int n) {
        int numOfPaths = 0;
        findPath(0, 0, m-1, n-1, numOfPaths);
        cout << numOfPaths;
        
        return numOfPaths;
    }
    */
};
