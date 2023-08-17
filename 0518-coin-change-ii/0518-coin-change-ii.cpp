class Solution {
public:
//     int change(int value, vector<int>& denominations) {
//         int n = denominations.size();
//             vector<vector<int>>dp(n ,vector<int>(value+1 , 0));
//             vector<int>prev(value+1, 0) , curr(value+1, 0);
//               for(int i = 0 ; i<=value ; i++)
//               prev[i] = (value%denominations[0] == 0);

//               for(int i = 1 ; i<n ; i++){
//                   for(int tar = 0 ; tar<=value ;tar++){
//                         int notTake = prev[tar];
//                         int take = 0;
//                         if(denominations[i]<=tar) take  = curr[tar-denominations[i]];
//                          curr[tar] = take+notTake;
//                   }
//                   prev = curr;
//               }
//                 return prev[value];
//     }
    
        int f(int i , int T , vector<int>&a , vector<vector<int>>&dp){
            if(i == 0){
                return (T%a[i] == 0);
            }
            if(dp[i][T]!=-1)return dp[i][T];
            int notTake = f(i-1 , T , a , dp);
            int take = 0;
            if(a[i]<=T) take  = f(i , T-a[i] , a , dp);
            return dp[i][T] = take+notTake;
        }
        int change(int value, vector<int>& denominations)
        {
            //Write your code here
            int n = denominations.size();
            vector<vector<int>>dp(n ,vector<int>(value+1 , -1));
            return f(n-1 , value , denominations , dp);
        }
    
};

