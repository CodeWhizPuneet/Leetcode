class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> charMap(256, -1);
        int maxLength = 0;
        int left = 0;
        for (int right = 0; right < s.length(); right++) {
            char currentChar = s[right];
            
            // If the character is repeated and inside the current window, move the left boundary
            if (charMap[currentChar] >= left) {
                left = charMap[currentChar] + 1;
            }
            // Record the current character's index
            charMap[currentChar] = right;
            // Calculate window size and update max length
            maxLength = max(maxLength, right - left + 1);
        }
        return maxLength;
    }
};