/*
 * @lc app=leetcode id=64 lang=cpp
 *
 * [64] Minimum Path Sum
 */

// @lc code=start
class Solution {
public:
    long long int dp[1001][1001];
    int fun(vector<vector<int>>& grid,int m,int n)
    {
        if(m==0 and n==0) return grid[0][0];
        if(m<0 or n<0) return INT_MAX;
        if(dp[m][n]!=-1) return dp[m][n];
        dp[m][n] = min(fun(grid,m-1,n),fun(grid,m,n-1)) + grid[m][n];
        return dp[m][n];
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof dp);
        int m = grid.size();
        int n = grid[0].size();
        return fun(grid,m-1,n-1);
        
    }
};
// @lc code=end

