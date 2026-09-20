class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // int n = nums.size();
        // int low = 0;
        // int high = 0;
        // int sum  = 0;
        // int res = INT_MAX;
        // while(high<n){
        //     sum = sum + nums[high];
        //     while(sum>=target){
        //         int len = high - low + 1;
        //         res = min(res,len);
        //         sum = sum - nums[low];
        //         low++;
        //     }
        //     high++;
        // }
        // if (res == INT_MAX) return 0;
        // return res;
       int n = nums.size();
       int low = 0;
       int window = 0;
       int res = INT_MAX;
       for(int high = 0 ; high<n ; high++){
            window = window + nums[high];
            while(window >= target){
            res = min(res, high-low+1);
            window = window - nums[low];
            low++;
            }
        }
        return (res==INT_MAX)?0:res;
    }
};