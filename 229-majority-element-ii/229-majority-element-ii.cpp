class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    int num1=-1,num2=-1,count1=0,count2=0,n=nums.size();
    vector<int>ans;
    for(auto &it:nums){
        if(it==num1) count1++;
        else if(it==num2) count2++;
        else if(count1==0){
            num1=it;
            count1=1;
        }
        else if(count2==0){
            num2=it;
            count2=1;
        }
        else{
            count1--;
            count2--;
        }
    } 
    count1=0,count2=0; 
    for(auto &i:nums){
        if(i==num1) count1++;
        else if(i==num2) count2++;
    }
 	if(count1>floor(n/3)) ans.push_back(num1);
    if(count2>floor(n/3)) ans.push_back(num2);
    return ans;
    }
};