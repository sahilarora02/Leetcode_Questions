#include<unordered_map>
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int maxInd = 0 ,  max  = nums[0];
        int n = nums.size();
        if(n == 1){
            return 0;
        }
        // unordered_map<int , pair<int , int> >
        for(int i  = 0  ; i <n ; i++){
            
             if(i == 0  ){
                if(nums[i] > nums[i+1]  && nums[i]>max){
                    max = nums[i];
                    maxInd = i;
                }
            }
            else if(i == n-1){
                if(nums[i] > nums[i-1] && nums[i]>max){
                    max = nums[i];
                    maxInd = i;
                }
            }
            else{
                if(nums[i] > nums[i+1] && nums[i] > nums[i-1] && nums[i]>max){
                    max = nums[i];
                    maxInd = i;
                }
            }
        }
        return maxInd;
    }
};