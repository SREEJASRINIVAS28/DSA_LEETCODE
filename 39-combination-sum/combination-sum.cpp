class Solution {
public:
   void PrintSum(int i,int &n,vector<int> &candidates,vector<int> &res,vector<vector<int>> &ans,int sum,int &target){
    if(i>=n){
        return;
    }
    if(sum==target){
        ans.push_back(res);
        return;
    }

    if(sum+candidates[i]<=target){
        res.push_back(candidates[i]);
        PrintSum(i,n,candidates,res,ans,sum+candidates[i],target);
         res.pop_back();

    }
    PrintSum(i+1,n,candidates,res,ans,sum,target);
   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       int n=candidates.size();
       vector<int> res;
       vector<vector<int>> ans;
       PrintSum(0,n,candidates,res,ans,0,target);   
       return ans;
    }
};


