class Solution {
public:
    bool checkPartition(int i , int k , vector<int>&arr , vector<vector<int>>&dp){
        if(k==0)return true;
        if(i == 0)return arr[i]==k;
        
        if(dp[i][k]!=-1)return dp[i][k];
        int pick = 0;
        if(arr[i]<=k){
            pick = checkPartition(i-1 , k-arr[i] , arr , dp);
        }
        int notPick = checkPartition(i-1 , k , arr , dp);
        
        return dp[i][k] = pick | notPick;
    }
    bool canPartition(vector<int>& nums) {
        int totalSum = 0;
        for(int i = 0 ;i<nums.size() ; i++)totalSum+=nums[i];
        if(totalSum%2)return false;
        int target = totalSum/2;
        int n = nums.size();
        vector<vector<int>>dp(n , vector<int>(target+1 , -1));
        return checkPartition(n-1 , target , nums ,  dp);
    }
};