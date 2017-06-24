class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string> > anagrams;
        
        for(int i=0; i<strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            anagrams[temp].push_back(strs[i]);
        }
        vector<vector<string> > res;
        int idx = 0;
        int length = anagrams.size();
        cout << "size: " << length << endl;
        //res.resize(length);
        for(map<string, vector<string> >::iterator it=anagrams.begin(); it!=anagrams.end(); it++){
            /*for(vector<string>::iterator jt=it->second.begin(); jt!=it->second.end(); jt++){
                cout << *jt << endl;
                res[idx].push_back(*jt);
            }*/
            //cout << it
            res.push_back(it->second);
            idx++;
        }
        return res;
    }
};
