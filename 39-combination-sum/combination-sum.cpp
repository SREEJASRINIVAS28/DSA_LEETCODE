class Solution {
public:
// set<vector<int>> s;
void PrintSum(vector<int>& candidates,int i,vector<int> &res,vector<vector<int>> &ans,int tar){

    
    if(tar==0){
        // if(s.find(res)==s.end()){
        //     ans.push_back(res);
        //     s.insert(res);
        //     return;
        // }
         ans.push_back(res);
         return;
    }
    if(i==candidates.size() || tar<0){
        return;
    }
    res.push_back(candidates[i]);
    // PrintSum(candidates,i+1,res,ans,tar-candidates[i]);
    PrintSum(candidates,i,res,ans,tar-candidates[i]);
    res.pop_back();
    PrintSum(candidates,i+1,res,ans,tar);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> res;
        vector<vector<int>> ans;
        PrintSum(candidates,0,res,ans,target);
        return ans;
    }
};