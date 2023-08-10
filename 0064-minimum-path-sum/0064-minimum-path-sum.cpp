class Solution {
public:
    int findMinSum(int i , int j ,vector<vector<int>>&grid ,vector<vector<int>>&dp){
        if(i==0&&j==0)return dp[i][j] = grid[i][j];
        if(i<0 || j<0)return 205;
        if(dp[i][j]!=-1)return dp[i][j];
        int left = grid[i][j] + findMinSum(i , j-1 ,grid ,dp);
                int up = grid[i][j] + findMinSum(i-1, j ,grid ,dp);

        return dp[i][j] = min(up , left);
        }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>>dp(m ,vector<int>(n,-1));
        return findMinSum(m-1,n-1,grid ,dp);
    }
};