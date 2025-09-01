class Solution {
public:
int robber(vector<int> &nums,int n,int start,vector<int>&dp1){
    if(n==start) return nums[start];
    if(n<start) return 0;
    if(dp1[n]!=-1) return dp1[n];
    int pick=nums[n]+robber(nums,n-2,start,dp1);
    int notpick=0+robber(nums,n-1,start,dp1);
    return dp1[n]=max(pick,notpick);
}

    int rob(vector<int>& nums) {
        int n=nums.size();
        if (n == 1) return nums[0];
        if (n == 2) return max(nums[0], nums[1]);

        vector<int> dp1(n,-1);
        vector<int> dp2(n,-1);
        int case1=robber(nums,n-2,0,dp1);
        int case2=robber(nums,n-1,1,dp2);
        return max(case1,case2);

    }
};