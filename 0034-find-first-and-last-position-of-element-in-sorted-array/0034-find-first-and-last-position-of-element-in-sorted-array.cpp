class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
          int n = nums.size();
        vector<int> ans ;
        int start = -1 , end = -1;
        int  i = 0;
        
        for(int k = 0 ; k < n ; k ++){
            if(nums[k] != target){
               continue;
            }else{
                start = k;
                break;
            }
        }
        
          for(int k = n-1 ; k >=0 ; k --){
            if(nums[k] != target){
               continue;
            }else{
                end = k;
                break;
            }
        }
        

        
        ans.push_back(start);
        ans.push_back(end);
        
        return ans;
       
    }
};