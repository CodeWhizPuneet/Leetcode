class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        return nums.empty() ? 0 : std::distance(nums.begin(), std::unique(nums.begin(), nums.end()));
    }
};