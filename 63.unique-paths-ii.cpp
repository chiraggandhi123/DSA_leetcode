class Solution {
public:
    int dp[101][101];
    int fun(vector<vector<int>>& obstacleGrid,int m,int n)
    {
        //base case
        
        if(m==0 and n==0) return 1;
        if(m<0 or n<0) return 0;
        if(obstacleGrid[m][n]) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        dp[m][n] = fun(obstacleGrid,m-1,n) + fun(obstacleGrid,m,n-1);
        return dp[m][n];
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        if(obstacleGrid[0][0]) return 0;
        memset(dp,-1,sizeof dp);
        return fun(obstacleGrid,m-1,n-1);
    }
};