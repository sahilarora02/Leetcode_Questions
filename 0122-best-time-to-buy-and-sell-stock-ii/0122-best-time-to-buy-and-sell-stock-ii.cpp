class Solution {
public:
    int f(int i , int buy , vector<int>&a , vector<vector<int>>&dp){
          if(i == a.size()) return 0;
        if(dp[i][buy]!=-1)return dp[i][buy];
        int profit INT_MIN;
        if(buy){
             profit = max((-a[i] + f(i+1 , 0 , a ,dp)) , f(i+1 , 1 ,a ,dp)); 
        }else{
            profit = max((a[i] + f(i+1 , 1 , a ,dp)) ,f(i+1 , 0 , a ,dp) );
        }
        return dp[i][buy] = profit;
    }
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<vector<int>>dp(n , vector<int>(2 , -1));
        return f(0 , 1 , prices , dp);
    }
};