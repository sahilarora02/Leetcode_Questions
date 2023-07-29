class Solution {
public:

    bool canJump(vector<int>& nums) {
        int size = nums.size();
        int reachable = 0;
        
        for(int i = 0;i<size ; i++){
            if(reachable<i) return false;
            reachable = max(reachable , i+nums[i]);
        }
        return true;
    }
};