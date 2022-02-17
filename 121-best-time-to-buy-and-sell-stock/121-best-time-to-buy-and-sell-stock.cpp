class Solution {
public:
    int maxProfit(vector<int>& nums) {
      int prev_min=nums[0]; 
        int result=0; 
        int n=nums.size();
        for(int i=1;i<n;i++){ 
            result=max(result,nums[i]-prev_min); 
            prev_min=min(nums[i],prev_min);} 
        return result;  
    }
};