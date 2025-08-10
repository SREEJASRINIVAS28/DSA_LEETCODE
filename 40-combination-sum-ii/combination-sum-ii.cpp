class Solution {
public:
    
    void PrintSum(vector<int> &candidates,int i,int tar,vector<vector<int>> &ans,vector<int> &res){
         if(tar==0){
                ans.push_back(res);
                return;
        }
        if(i==candidates.size() || tar<0){
            return;
        }
        
        res.push_back(candidates[i]);
        PrintSum(candidates,i+1,tar-candidates[i],ans,res);
        res.pop_back();
        while(i+1 < candidates.size() && candidates[i]==candidates[i+1]) i++;
        PrintSum(candidates,i+1,tar,ans,res);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> res;
        vector<vector<int>> ans;
        PrintSum(candidates,0,target,ans,res);
        return ans;
        
    }
};