class Solution {
public:
    int findMin(int i , int j , vector<vector<int>>&triangle , vector<vector<int>>&dp ,int n){
        if(i == n-1) return dp[i][j] = triangle[i][j];
        if(dp[i][j]!=-1)return dp[i][j];
        int down = triangle[i][j] + findMin(i+1 , j , triangle , dp ,n);
        int diagonal = triangle[i][j] + findMin(i+1 , j+1 , triangle , dp ,n);
        return dp[i][j] = min(down , diagonal);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>>dp(n , vector<int>(n,-1));
        return findMin(0 , 0 , triangle , dp ,n);
    }
};