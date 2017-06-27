class Solution {
public:
    int numDecodings(string s) {
        if(s.empty()) return 0;
        int l = s.length();
        vector<int> res(l);
        
        res[0] = 1;
        if(s[0]=='0'){
            res[0] = 0;
        
            return 0;
        }
        
        
        for(int i=1; i<l; i++){
            int a = s[i] - '0' + (s[i-1] - '0')*10;
            cout << "-> " << a << endl;
            if(!a){
                return 0;
            }
            if(i==1){
                
                if(a < 27 && a%10!=0 && a/10 > 0){
                    cout << "one\n";
                    res[i] = res[i-1] + 1;
                }
                else if(a == 10 || a == 20){
                    res[i] = 1;
                }
                else if(a%10==0 && a > 29){
                    return 0;
                }
                else{
                    res[i] = res[i-1];
                }
            }
            else{
                if(a < 27 && a%10!=0 && a/10 > 0){
                    res[i] = res[i-1] + res[i-2];
                }
                else if(a == 10 || a == 20){
                    res[i] = res[i-2];
                }
                else if(a%10==0 && a > 29){
                    return 0;
                }
                else{
                    res[i] = res[i-1];
                }
            }
            cout << res[i] << "<--\n";
        }
        return res[l-1];
    }
};
