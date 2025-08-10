class Solution {
public:
void PrintSum(int i,int k,int n,vector<int> &res,vector<vector<int>> &ans){
     if(n==0 && res.size()==k ){
        ans.push_back(res);
        return;
    }
    if(res.size()==k || n<0  || i>9){
        return;
    }
    res.push_back(i);
    PrintSum(i+1,k,n-i,res,ans);
    res.pop_back();
    PrintSum(i+1,k,n,res,ans);

}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> res;
        vector<vector<int>> ans;
        PrintSum(1,k,n,res,ans);
        return ans;

    }
};