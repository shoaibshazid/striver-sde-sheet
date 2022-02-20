class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      int n=nums.size(),first,last;
      vector<int>ans;
      map<int,int>mpp;
      for(int i=0;i<n;i++){
          int t=target-nums[i];
          if(mpp.find(t)!=mpp.end()){
              first=mpp[t];
              last=i;
              ans.push_back(first);
              ans.push_back(last);
          }
          mpp[nums[i]]=i;
      } 
      return ans;
    }
};