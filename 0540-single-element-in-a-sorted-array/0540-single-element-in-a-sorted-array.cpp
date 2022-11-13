#include<unordered_map>
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int> u;
        for(int i = 0 ;  i < n ; i++){
            u[nums[i]]++;
        }
        for(int i = 0 ; i < n ;i++){
            if(u[nums[i]]==1){
                return nums[i];
            }
        }
        return -1;
        // if(n==1){
        //     return nums[0];
        // }
        // for(int i = 1 ; i <n ; i++){
        //     if(nums[i])
        // }
    }
};