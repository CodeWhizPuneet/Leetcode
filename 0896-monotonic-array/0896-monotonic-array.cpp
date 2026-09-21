class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool res=true;
        bool res1=true;
        for(int i = 1 ; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                res=false;
            }
            if(nums[i]<nums[i-1]){
                res1=false;
            }


        }
        return res||res1;
        
    }
};