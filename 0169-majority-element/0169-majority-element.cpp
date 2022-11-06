#include<unordered_map>
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int ,int> u;
        int max = 0 , maxVal;
        int n   =  nums.size();
        for(int i = 0 ;i<n ;i++){
            u[nums[i]]++;
        }
        for(int i = 0;i <n ;i++){
            if(u[nums[i]]>n/2&& u[nums[i]]>max){
                max = nums[i];
                maxVal = nums[i];
            }
           
        }
        return maxVal;
    }
};