
class Solution {
public:
  int mul(vector<int> nums , int ind){
   int n  = nums.size();
      int mul = 1 ;
      if(ind == -1){
          for(int i = 0 ; i < n ;i++){
              mul*=nums[i];
          }
      }else {
          for(int i = 0 ; i  <n ; i++){
              if(i!=ind){
                    mul*=nums[i];
              }
          }
      }
      return mul;
  }
    vector<int> productExceptSelf(vector<int>& nums) {
           int n  = nums.size();
        vector<int> v;
        int multiply = mul(nums , -1);
        for(int i = 0 ; i< n ; i++){
            if(nums[i]!=0){
            v.push_back(multiply/nums[i]);                
            }else{
                v.push_back(mul(nums , i));
            }
        }
        return v;
    }
};