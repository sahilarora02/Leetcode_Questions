#include<unordered_map>
class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int ,int> u;
        for(int i  = 0 ; i  < nums.size() ; i++){
            u[nums[i]]++;
        }
        int k = 0 ;
        for(int i = 0 ; i < u [ 0] ; i ++  ){
            nums[ k ] = 0;
            k++;
        }
         for(int i = 0 ; i < u [ 1] ; i ++  ){
            nums[ k ] = 1;
            k++;
        }
         for(int i = 0 ; i < u [ 2] ; i ++  ){
            nums[ k ] = 2;
            k++;
        }
    }
};