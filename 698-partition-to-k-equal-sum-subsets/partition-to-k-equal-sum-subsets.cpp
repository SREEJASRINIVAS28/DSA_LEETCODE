class Solution {
public:
bool help(int i,vector<int> &nums,int BucketNum,int BucketSum,int &reqsum,int &k,vector<int> &picked,int &n){
    if(BucketNum==k-1) return true;
    if(BucketSum==reqsum){
        return help(0,nums,BucketNum+1,0,reqsum,k,picked,n);
    }
    if(BucketSum>reqsum) return false;
    if(i>=n) return false; 
    if(picked[i]==1){
        return help(i+1,nums,BucketNum,BucketSum,reqsum,k,picked,n);
    }
    else{
        BucketSum+=nums[i];
        picked[i]=1;
        bool op1=help(i+1,nums,BucketNum,BucketSum,reqsum,k,picked,n);
        BucketSum-=nums[i];
        picked[i]=0;
        bool op2=help(i+1,nums,BucketNum,BucketSum,reqsum,k,picked,n);
        return op1 || op2;
    }
    
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.rbegin(),nums.rend());
        vector<int> picked(n,0);
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        if(sum % k !=0) return false;
        int reqsum=sum/k;
        return help(0,nums,0,0,reqsum,k,picked,n);
    }
};