class Solution {
public:
void UniqueSubsets(int i,int n,vector<int> &res,vector<vector<int>> &ans,vector<int> &nums){
    if(i==n){
        ans.push_back(res);
        return;
    }
    res.push_back(nums[i]);
    UniqueSubsets(i+1,n,res,ans,nums);
    res.pop_back();
    int next=i+1;
    while(next<n && nums[next]==nums[i] ){
            next++;
    }
    UniqueSubsets(next,n,res,ans,nums);
}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
         vector<int> res;
         vector<vector<int>> ans;  
         sort(ans.begin(),ans.end());
        UniqueSubsets(0,nums.size(),res,ans,nums); 
        return ans;
    }
};