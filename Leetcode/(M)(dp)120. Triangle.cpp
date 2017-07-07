class Solution {
public:
    void print(vector<int>& s){
        for(int i=0; i<s.size(); i++){
            cout << s[i] << " ";
        }    
        cout << endl;
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        
        vector<int> s(triangle.size());
        s[0] = triangle[0][0];
        // print(s);
        for(int i=1; i<s.size(); i++){
            s[i] = s[i-1] + triangle[i][i];
            for(int j=i-1; j>0; j--){
                s[j] = triangle[i][j] + min(s[j-1], s[j]); 
            }
            s[0] += triangle[i][0];
            // print(s);
        }
        
        
        return *min_element(s.begin(), s.end());
    }
    /*
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<vector<int> > s = triangle;
        
        
        for(int i=1; i<s.size(); i++){
            for(int j=0; j<s[i].size(); j++){
                if(j==0){
                    //cout << s[i][0] << " " << s[i-1][0] << endl;
                    //cout << s[i][0] + s[i-1][0] << endl;
                    s[i][0] += s[i-1][0];
                }
                else if(i==j){
                    s[i][j] += s[i-1][j-1];
                }
                else{
                    s[i][j] += min(s[i-1][j-1], s[i-1][j]); 
                }
                //cout << s[i][j] << " ";
            }
            //cout << endl;
        }
        
        
        return *min_element(s[s.size()-1].begin(), s[s.size()-1].end());
    }
    */
};
