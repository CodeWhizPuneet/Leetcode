class Solution {
public:
    int countCommas(int n) {
        // int res = 0;
        // if(n >=1000){
        //     res += n - 1000+1;

        // }
        // else if(n>=1000000){
        //     res = res + (n-1000000 + 1);
        // }
        // else{
        //     return res;
        // }
        // return res;
        int res = 0;
        int new_comma = 1000;
        while(n>=new_comma){
            res = res + (n-new_comma + 1);
            new_comma = new_comma*1000;
        }
        return res;
    }
};