class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mapS; vector<int> SSL(s.length()+1);
        int maxLength = 0, temp = 0;
        
        for(int i=0; i<s.length(); i++){
            char ch = s[i];
            SSL[i+1] = min(SSL[i]+1, i+1-mapS[ch]);
            mapS[ch] = i+1;
        
            if(maxLength < SSL[i+1])
                maxLength = SSL[i+1];
        }
        
        return maxLength;
    }
};
