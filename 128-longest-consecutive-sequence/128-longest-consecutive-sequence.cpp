class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if(nums.size()==0) return 0;
       sort(nums.begin(),nums.end());
       int n=nums.size(),count=1,result=1;
       for(int i=0;i<n-1;i++){
           if(nums[i+1]==nums[i]+1){
               count++;
           }
           else if(nums[i+1]==nums[i]) continue;
           else{
               result=max(result,count);
               count=1;
           }
       } 
        result=max(result,count);
        return result;
    }
};