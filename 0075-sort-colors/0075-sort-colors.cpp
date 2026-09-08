class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one =0;
        int two =0;
        int three = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                one++;
            }
            else if(nums[i]==1){
                two++;
            }
            else{
                three++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(i<one){
                nums[i]=0;
            }
            else if(i<one+two){
                nums[i]=1;
            }
            else{
                nums[i]=2;
            }
        }

    }
};