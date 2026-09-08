class Solution {
public:
    int countCommas(int n) {
        int res;
        if(n >=1000){
            res = n - 1000+1;

        }
        else if(n>=1000000){
            res = res + (n-1000000 + 1);
        }
        else{
            return 0;
        }
        return res;
    }
};