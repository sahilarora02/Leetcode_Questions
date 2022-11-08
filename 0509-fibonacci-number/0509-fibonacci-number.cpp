#include<vector>
class Solution {
public:
    int dpSolve(int n , vector<int> &dp){
        if(n<=1){
            return n;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n] = dpSolve(n-1 , dp)+dpSolve(n-2  , dp);
        return dp[n];
    }
    int fib(int n) {
     vector<int> dp(n+1);
        for(int i = 0 ;i <= n ;i++){
            dp[i] = -1;
        }
        return dpSolve(n , dp);
    }
};