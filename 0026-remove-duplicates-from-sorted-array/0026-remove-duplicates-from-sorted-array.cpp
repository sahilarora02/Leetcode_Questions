#include<unordered_map>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int , int > u;
        for(int i = 0 ;i<nums.size() ; i++){
            u[nums[i]]++;
        }
        int j = 0;
        for(int i = 0 ; i<nums.size();i++){
            if(u[nums[i]]>0){
                nums[j] = nums[i];
                u[nums[i]] = 0;
                j++;
            }
        }
        return j;
    }
};