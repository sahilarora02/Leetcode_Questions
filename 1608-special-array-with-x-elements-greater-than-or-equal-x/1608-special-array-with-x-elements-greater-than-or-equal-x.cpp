class Solution {
public:
    int CountValues(int mid, vector<int>&nums){
        int cnt = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] >= mid)cnt++;
        }
        // cout<<"mid: "<<mid<<" "<<"count: "<<cnt<<endl;
        return cnt;
    }
    int specialArray(vector<int>& nums) {
       int size = nums.size();
        int low = 0, high = size;
        while(low<=high){
            int mid = (low+high)/2;
            // cout<<mid<<endl;
            int cnt = CountValues(mid, nums);
            if(cnt == mid)return mid;
            else if(cnt > mid){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return -1;
    }
};