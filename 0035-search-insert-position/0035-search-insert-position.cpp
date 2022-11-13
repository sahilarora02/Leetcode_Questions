class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int prev = 0;
        if(target<nums[0]){
            return 0;
        }
        for(int  i = 0 ; i  < n ; i++){
            if(nums[i] == target){
                return i;
            }else if(nums[i]<target){
                prev = i;
            }else{
                return prev + 1;
            }
        }
        return n;
    }
};