class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mapS;
        for(auto ch : s){
            mapS[ch]++;
        }
        for(auto ch : t){
            if(!mapS[ch])
                return false;
            mapS[ch]--;
        }
        for(auto ch : s){
            if(mapS[ch])
                return false;
        }
        return true;
    }
};
