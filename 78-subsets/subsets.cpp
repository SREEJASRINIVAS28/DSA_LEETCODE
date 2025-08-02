class Solution {
public:
void Subsets(int i,vector<int>&nums,vector<int> &res,vector<vector<int>> & ans,int n){
    if(i==n){
        ans.push_back(res);
        return;
    }
    res.push_back(nums[i]);
    Subsets(i+1,nums,res,ans,n);
    res.pop_back();
    Subsets(i+1,nums,res,ans,n);
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> res;
        vector<vector<int>> ans;
        Subsets(0,nums,res,ans,nums.size());
        return ans;
        
    }
};