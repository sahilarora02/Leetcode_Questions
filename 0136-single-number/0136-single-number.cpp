#include<unordered_map>
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int> u;
        for(int i = 0 ; i < nums.size() ; i++){
            u[nums[i]]++;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            if(u[nums[i]] == 1){
                return nums[i];
            }
        }
        return -1;
    }
};