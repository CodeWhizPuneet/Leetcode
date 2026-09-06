class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        
        // 1. Square all elements in-place and find split point
        int count = -1; // Pointer for negative numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0) {
                count = i;
            }
            nums[i] = nums[i] * nums[i];
        }

        vector<int> res(n);
        int idx = 0;
        int p = count + 1; // Pointer for non-negative numbers

        // 2. Merge two halves outward
        while (count >= 0 && p < n) {
            if (nums[count] <= nums[p]) {
                res[idx++] = nums[count--];
            } else {
                res[idx++] = nums[p++];
            }
        }

        // 3. Collect remaining elements from negative side
        while (count >= 0) {
            res[idx++] = nums[count--];
        }

        // 4. Collect remaining elements from positive side
        while (p < n) {
            res[idx++] = nums[p++];
        }

        return res;
    }
};