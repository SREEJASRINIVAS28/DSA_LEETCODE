class Solution {
public:
int ways(int n,vector<int> &dp){
    if (n==0) return 1;
    if (n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int left=ways(n-1,dp);
    int right=ways(n-2,dp);
    return dp[n]=left+right;
}
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        return ways(n,dp);

    }
};