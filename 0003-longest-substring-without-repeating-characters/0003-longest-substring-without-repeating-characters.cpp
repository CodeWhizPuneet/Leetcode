class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastPos(128, -1);
        int maxLength = 0;
        int left = 0;

        for (int right = 0; right < s.length(); ++right) {
            char currentChar = s[right];
            
            // If character was seen inside the current window, shrink the window
            if (lastPos[currentChar] >= left) {
                left = lastPos[currentChar] + 1;
            }

            // Update character's latest position and calculate window size
            lastPos[currentChar] = right;
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};