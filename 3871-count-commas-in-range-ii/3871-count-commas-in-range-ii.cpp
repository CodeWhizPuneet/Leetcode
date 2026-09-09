class Solution {
public:
    long long countCommas(long long n) {
        long long new_comma = 1000;
        long long res = 0;
        if(n<1000){
            return 0;
        }
        while(n>=new_comma){
            res = res + (n-new_comma+1);
            // if(new_comma>10^18){
            //     break;
            // }
            new_comma = new_comma * 1000;
        }
        return res;
    }
};