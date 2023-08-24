class Solution {
public:
    
  int maxProfit(vector<int>& prices)

{

    int n=prices.size();

    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(3,0)));

   // return solve(0,1,2,n,prices,dp);

   //Tabulation

   //Base case

   //1.(Base case)

//    for(int index=0;index<=n;index++){

//        for(int buy=0;buy<=1;buy++){

//            dp[index][buy][0]=0;

//        }

//    }

 

//    //2.Base case

//    for(int buy=0;buy<=1;buy++){

//        for(int cap=0;cap<=2;cap++){

//            dp[n][buy][cap]=0;

//        }

//    }

 

   //Nested loops

   for(int index=n-1;index>=0;index--){

       for(int buy=0;buy<=1;buy++){

           for(int cap=1;cap<=2;cap++){

                int profit=0;

               if(buy){

               profit=max(-prices[index]+dp[index+1][0][cap],

                                  dp[index+1][1][cap]);

                }

                else{

                    profit=max(prices[index]+dp[index+1][1][cap-1],

                                 dp[index+1][0][cap]);

                    }

                    dp[index][buy][cap]=profit;

           }

       }

   }

   return dp[0][1][2];//Where initial call is made

}  
//     int maxProfit(vector<int>& prices) {
        
//     }
};