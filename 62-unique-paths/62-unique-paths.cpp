class Solution {
private:
    int solve(int sr,int sc,int dr,int dc,vector<vector<int>>&dp){
        if(sr==dr && sc==dc) return 1;
        if(sr>dr || sc>dc) return 0;
        if(dp[sr][sc]!=-1) return dp[sr][sc];
        return dp[sr][sc]=solve(sr+1,sc,dr,dc,dp)+solve(sr,sc+1,dr,dc,dp);
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        int paths=solve(0,0,m-1,n-1,dp);
        if(m==1&&n==1) return paths;
        return dp[0][0];
    }
};