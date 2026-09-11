class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits; // No carry over needed
            }
            digits[i] = 0; // Carry over 1 to the next left digit
        }
        
        // If all digits were 9 (e.g., [9,9,9] becomes [0,0,0]), prepend 1
        digits.insert(digits.begin(), 1);
        return digits;
    }
};