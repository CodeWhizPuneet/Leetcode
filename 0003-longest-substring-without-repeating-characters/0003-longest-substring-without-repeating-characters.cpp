class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int left = 0;
       int res = INT_MIN;
       int n = s.size();
       unordered_map<char , int> f ;
       for(int right= 0 ; right<n ; right++){
            f[s[right]] = f[s[right]] + 1;

            int len = right - left + 1;
            while(f.size()<len){
                f[s[left]]--;
                if(f[s[left]]==0){
                    f.erase(s[left]);
                }
                left++;
                len = right - left + 1;
            }
            if(f.size()==len){
                res = max(res,len);
            }
       }
       return (res == INT_MIN) ? 0 : res;
    }
};