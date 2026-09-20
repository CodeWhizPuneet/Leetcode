class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int low = 0;
        int max_len = 0;
        int max_freq = 0;
        unordered_map<char,int> f ;
        for(int right = 0;right<n;right++){
            f[s[right]]++;
            max_freq = max(max_freq, f[s[right]]);
            int len = right - low + 1 ;
            while(len - max_freq > k){
                f[s[low]]--;
                if(f[s[low]]==0){
                    f.erase(s[low]);
                }
                low++;
                len = right - low + 1;
            }
                max_len = max(max_len,len);
        }
        return max_len;
    }
};