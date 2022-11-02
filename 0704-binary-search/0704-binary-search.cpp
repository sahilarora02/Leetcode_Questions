class Solution {
public:
    int BinarySearch(vector<int> &nums ,int s  , int e  ,int key ){
        if(s>e){
            return -1 ;
        }
        int mid = s  + (e-s)/2;
        if(nums[mid] == key){
            return mid;
        }
        if(nums[mid]>key){
            return BinarySearch(nums , s , mid-1 , key);
        }else{
            return BinarySearch(nums, mid+1 , e , key);
        }
    }
    
    int search(vector<int>& nums, int target) {
        return BinarySearch(nums , 0 , nums.size()-1 , target);
    }
};