class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(!n) return false;
        while(1){
            if(n==1) return true;
            if(!(n%2)) n /= 2;
            else return false;
        }
    }
};
