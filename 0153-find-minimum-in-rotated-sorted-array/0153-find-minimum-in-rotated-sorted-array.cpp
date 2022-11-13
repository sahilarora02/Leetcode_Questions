class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
       int Left = 0 , Right = n-1 , mid  , minVal = INT_MAX;
        
        while(Left<=Right){
            if(nums[Left]<=nums[Right]){
            return min(minVal , nums[Left]);
        }
            mid = Left + (Right-Left)/2;
            if(nums[Left]<=nums[mid]){
                minVal = min(nums[Left] , minVal);
                Left = mid+1;
            }else{
                minVal = min(nums[mid] , minVal);
                Right = mid-1;
            }
            
        }
        return minVal;
    }
};