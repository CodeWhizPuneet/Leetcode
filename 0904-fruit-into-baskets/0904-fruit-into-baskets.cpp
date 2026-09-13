class Solution {
public:
    int totalFruit(std::vector<int>& fruits) {
        int n = fruits.size();
        int low = 0;
        int res = INT_MIN;
        unordered_map<int , int> count;
        for(int high = 0; high<n; high++){
            count[fruits[high]] = count[fruits[high]] + 1;

            while(count.size() > 2){
                count[fruits[low]]--;
                if(count[fruits[low]]==0){
                    count.erase(fruits[low]);
                }
                low++;
            }
            if(count.size()<=2){
                int len = high - low + 1;
                res = max(len,res);
            }
        }
        return (res == INT_MIN) ? 1 : res;
    }
};