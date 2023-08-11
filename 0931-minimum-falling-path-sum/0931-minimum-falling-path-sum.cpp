class Solution {
public:
//     int findMin(int i , int j , vector<vector<int>>&a , int n ,int m , vector<vector<int>>&dp){
        
//         if(j<0 || j>=m) return 32000;
//         if(i == 0)return dp[0][j] =  a[0][j];
//         if(dp[i][j]!=-1)return dp[i][j];
//         int s = a[i][j] + findMin(i-1 , j , a , n , m , dp);
//         int ld = a[i][j]+ findMin(i-1 , j-1 ,a , n , m , dp);
        
//         int rd = a[i][j]+findMin(i-1 ,j+1 , a , n , m , dp);
        
//         return dp[i][j] =  min(s , min(ld , rd));
        
//     }
        int minFallingPathSum(vector<vector<int>>& matrix) {
        
        
        
        int n=matrix.size();
        
        int m=matrix[0].size();
        
        vector<vector<int>>dp(n,vector<int>(m,0));
        
        
        for(int j=0;j<m;j++)
        {
            dp[0][j]=matrix[0][j];
            
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int ld=1e9,rd=1e9;
                
                
                int up=matrix[i][j] + dp[i-1][j];
                
                if(j-1>=0)
                    ld=matrix[i][j] + dp[i-1][j-1];
                if(j+1<m)
                    rd=matrix[i][j] + dp[i-1][j+1];
                
                dp[i][j] = min(up,min(ld,rd));
                
                
                
            }
        }
        
        int mini=dp[n-1][0];
        
        for(int j=1;j<m;j++)
        {
            
            mini=min(mini,dp[n-1][j]);
            
        }
        return mini;
        
    }
};