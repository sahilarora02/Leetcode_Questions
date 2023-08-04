class Solution {
public:

    
    long long maxScore(vector<int>& nums, int x) {
        int n = nums.size();
        long ans = 0 ,evenEnd = 0 , oddEnd = 0;
        if(nums[0]%2==0){
            evenEnd+=nums[0];
            oddEnd+=nums[0]-x;
        }else{
            oddEnd+=nums[0];
            evenEnd+=nums[0]-x;
        }
        ans = max(evenEnd,oddEnd);
        for(int i = 1;i<n;i++){
            if(nums[i]%2==0){
                evenEnd = max(evenEnd+nums[i] , oddEnd+nums[i]-x);
            }else{
                oddEnd = max(oddEnd+nums[i],evenEnd+nums[i]-x);
            }
            ans = max(evenEnd , oddEnd);
        }
        return ans;
    }
};