class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int> > output(numRows);
        if(numRows==0) return output;
        output[0].push_back(1);
        if(numRows==1) return output;
        output[1].push_back(1); output[1].push_back(1);
        if(numRows==2) return output;
        for(int i=2; i<numRows; i++){
            output[i].push_back(1);
            for(int j=0; j<i-1; j++){
                int sum = output[i-1][j] + output[i-1][j+1];
                output[i].push_back(sum);
            }
            output[i].push_back(1);
        }    
    
        return output;
    }
};
