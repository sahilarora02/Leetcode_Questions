class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int final_xor = 0;
        for(int i = 0 ;i<nums.size(); i++){
            final_xor^=nums[i];
        }
        int cnt = 0;
        while(k > 0 || final_xor > 0){
            if((k%2)!=(final_xor%2)){
                cnt++;
            }
            k/=2;
            final_xor/=2;
        }
        return cnt;
    }
};