class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string ans = "";
        int j, k;
        for(int i=0; i<d.size(); i++){
            j = 0;
            for(k=0; k<s.size(); k++){
                // cout << s[k] << " " << d[i][j] << endl;
                if(s[k] == d[i][j])
                    j++;
            }
            cout << j << endl;
            int n = d[i].size();
            if(j==n && (n > ans.size() || (n==ans.size() && ans>d[i])))
               ans = d[i];
        }
        return ans;
    }
};
