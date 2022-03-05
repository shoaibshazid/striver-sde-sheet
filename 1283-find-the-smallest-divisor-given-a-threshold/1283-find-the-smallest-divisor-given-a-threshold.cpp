class Solution {
public:
    bool answerPossible(vector<int>&nums,int mid,int k){
        int result=0;
        for(auto &i:nums){
            result+=((i+mid-1)/mid);
            //if(i%mid!=0) result+=1;
        }
        if(result<=k) return true;
        else return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1,high=*max_element(nums.begin(),nums.end());
        int result=high;
        while(low<=high){
            int mid=(low+high)/2;
            if(answerPossible(nums,mid,threshold)==true){
                result=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        
        return result;
        
    }
};