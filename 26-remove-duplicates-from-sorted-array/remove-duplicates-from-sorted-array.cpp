class Solution {
public:
int duplicates(vector<int>&nums,int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
}
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int k=duplicates(nums,n);
        return k;
    }
};