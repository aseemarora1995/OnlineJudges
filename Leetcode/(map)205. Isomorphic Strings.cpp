class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> mapS;
        map<char, int> mapT;
        
        int i=0, j=0;
        while(i<s.size() && j<t.size()){
            mapS[s[i]] = t[j];
            mapT[t[j]] = s[i];
            j++; i++;
        }
        i = 0; j = 0;
        while(i<s.size() && j<t.size()){
            cout << s[i] << " " << mapS[s[i]] << " " << t[j] << endl;
            if(mapS[s[i]]!=t[j] || mapT[t[j]]!=s[i])
                return false;
            i++; j++;
        }
        return true;
    }
};
