class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int op = 0;
        for(int i = 0;i<nums.size();i++){
            int val = nums[i];
            int mod = val%3;
            if(mod == 0){
                continue;
            }else if(mod == 1){
                op++;
            }else{
                op++;
            }
        }
        return op;
    }
};