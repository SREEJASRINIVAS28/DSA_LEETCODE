class Solution {
public:
int MaximumSum(vector<int>&nums,int n,vector<int> &dp){
    if(n==0) return nums[0];
    if(n<0) return 0;
    if(dp[n]!=-1) return dp[n];
    int pick=nums[n]+MaximumSum(nums,n-2,dp);
    int notPick=0+MaximumSum(nums,n-1,dp);
    return dp[n]=max(pick,notPick);
}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n+1,-1);
        int ans=MaximumSum(nums,n-1,dp);
        return ans;
    }
};