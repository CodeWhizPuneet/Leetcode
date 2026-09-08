class Solution {
public:
    int countCommas(int n) {
        if(n >=1000){
            int diff = n - 1000+1;
            return diff;
        }
        else{
            return 0;
        }
    }
};