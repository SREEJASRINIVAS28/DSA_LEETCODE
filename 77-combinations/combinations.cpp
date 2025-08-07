class Solution {
public:
void print(int i,int n,int k,vector<int> &res,vector<vector<int>> &ans){
    
    if(res.size()==k){
        ans.push_back(res);
        return;
    }
    if(i>n){
        return;
    }
    res.push_back(i);
    print(i+1,n,k,res,ans);
    res.pop_back();
    print(i+1,n,k,res,ans);
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> res;
        vector<vector<int>> ans;
        print(1,n,k,res,ans);   
        return ans;
    }
};