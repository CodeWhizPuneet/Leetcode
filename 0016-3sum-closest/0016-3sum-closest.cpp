class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int sum = nums[0]+nums[1]+nums[2];
        int n = nums.size();

        for(int i=0;i<n;i++){
            int left = i+1;
            int right = n-1;
            while(left<right){
                int current_sum = nums[i] + nums[left] + nums[right];
                if (current_sum == target) {
                    return current_sum;}
                if (abs(target - current_sum) < abs(target - sum)) {
                    sum = current_sum;}
                if (current_sum < target) {
                    left++;
                } else {
                    right--;
                }
                
            }
        }
        return sum;
    }
};