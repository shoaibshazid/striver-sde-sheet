class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        if(nums.size()==0) return ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int target2=target-nums[i];
            for(int j=i+1;j<n;j++){
                int target3=target2-nums[j];
                int front=j+1;
                int back=n-1;
                while(front<back){
                    int two_sum=nums[front]+nums[back];
                    if(two_sum<target3) front++;
                    else if(two_sum>target3) back--;
                    else{
                        vector<int>temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[front];
                        temp[3]=nums[back]; 
                        ans.push_back(temp);
                        while(front<back && nums[front]==temp[2]) front++;
                        while(front<back && nums[back]==temp[3]) back--;
                    }
                }
                while(j+1<n && nums[j]==nums[j+1]) j++;
            }
            while(i+1<n && nums[i]==nums[i+1]) i++;
        }
        return ans;
    }
};