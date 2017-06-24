class Solution {
public:
    void print(vector<vector<int> >& temp){
        int n = temp.size();
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << temp[i][j] << " ";        
            }
            cout << endl;
        }
    }
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        print(matrix);
        
        for(int i=0; i<n; i++){
            for(int j=i; j<n-i-1; j++){
                cout << i << " " << j << endl;
                if(j == i){
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[n-1-i][j];
                    matrix[n-1-i][j] = matrix[n-1-i][n-1-j];
                    matrix[n-1-i][n-1-j] = matrix[i][n-1-j];
                    matrix[i][n-1-j] = temp;
                }
                else{
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[n-1-j][i];
                    matrix[n-1-j][i] = matrix[n-1-i][n-1-j];
                    matrix[n-1-i][n-1-j] = matrix[j][n-1-i];
                    matrix[j][n-1-i] = temp;
                }
            }
        }
        print(matrix);
    }
};
