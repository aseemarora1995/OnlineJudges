class Solution {
public:
    double power(double x, int n){
        if(!n){
            return 1.0;
        }
        if(n%2 == 0){
            return power(x, n/2) * power(x, n/2);
        }
        else{
            return power(x, n/2) * power(x, n/2) * x;
        }
    }
    double myPow(double x, int n) {
         if(n < 0){
             x = 1.0/x;
             n = -n;
         }
         return power(x, n);
    }
};
