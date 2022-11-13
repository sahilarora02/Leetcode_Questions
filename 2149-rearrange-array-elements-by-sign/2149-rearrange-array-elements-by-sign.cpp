#include<unordered_map>
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> v;
        vector<int> pos;
        vector<int> neg;
        for(int i  = 0 ;i<nums.size() ; i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        for(int i = 0 ; i <nums.size()/2 ; i++){
            v.push_back(pos[i]);
            v.push_back(neg[i]);
        }
  return v;
    }
};