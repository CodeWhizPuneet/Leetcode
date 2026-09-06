class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        vector<int> b;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                a.push_back(nums[i]);
            }
            else{
                b.push_back(nums[i]);
            }
        }
        if(a.size()==0){
            for(int i=0;i<nums.size();i++){
                nums[i]=nums[i]*nums[i];
            }
            return nums;
        }
        else if(b.size()==0){
            for(int i=0;i<nums.size();i++){
                nums[i]=nums[i]*nums[i];
            }
            reverse(nums.begin(), nums.end());
            return nums;
        }
        int i = 0;
        int j = 0;
        int idx = 0;
        int n = a.size();
        int m = b.size();
        vector<int> res(m+n);
        for(int i=0;i<n;i++){
            a[i]=a[i]*a[i];
        }
        reverse(a.begin(),a.end());

        for(int j=0;j<m;j++){
            b[j]=b[j]*b[j];
        }
        while(i<n and j<m){
            if(a[i]<=b[j]){
                res[idx]=a[i];
                i++;
                idx++;
            }
            else{
                res[idx]=b[j];
                j++;
                idx++;
            }
        }
        while(i<n){
            res[idx]=a[i];
            i++;
            idx++;
        }
        while(j<m){
            res[idx]=b[j];
            j++;
            idx++;
        }
        return res;
    }
};