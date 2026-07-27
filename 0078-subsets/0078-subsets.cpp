class Solution {
public:
    vector<vector<int>> ans;
    vector<int> ss;
    void allSubset(int i,vector<int>& nums) {
        if(i==nums.size()){
            ans.push_back(ss);
            return ;
        }
        ss.push_back(nums[i]);
        allSubset(i+1,nums);
        ss.pop_back();
        allSubset(i+1,nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        allSubset(0,nums);
        return ans;
        }
};