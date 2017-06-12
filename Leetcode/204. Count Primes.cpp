class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        int primes = 1, start=3;
        while(start < n){
            //if()
            int flag = 1;
            for(int i=3; i<=sqrt(start); i+=2){
                if(!(start%i)){
                    flag = 0;
                    break;
                }
            }
            if(flag) primes++;
            start += 2;
        }
        return primes;
    }
};
