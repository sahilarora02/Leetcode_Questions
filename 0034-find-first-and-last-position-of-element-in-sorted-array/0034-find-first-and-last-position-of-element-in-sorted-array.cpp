class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> v;
        int count  = 0 ;
        for(int i =  0; i<n ;i++){
        if(nums[i]==target){
              count++;
         }
        }
         if(count == 0){
        v.push_back(-1);
        v.push_back(-1);
        return v;
        }
        int c2 = 1;
        for(int i = 0 ; i< n ; i++){
           if(nums[i] == target && (c2 == 1 || c2 == count)  ){
           v.push_back(i);
           c2++;
           }else if(target == nums[i]){
               c2++;
           }
        }
        if(v.size()==1){
            int front  = v.front();
            v.push_back(front);
        }
        return v;
       
    }
};