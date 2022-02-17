class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0,ans=INT_MIN,n=nums.size();
        for(int i=0;i<n;i++){
            sum=max(nums[i],nums[i]+sum);
            ans=max(sum,ans);
        }
        return ans;
    }
};