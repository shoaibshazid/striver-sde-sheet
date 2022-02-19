// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
  long long merge(long long nums[],long long low,long long mid,long long high){
    vector<long long>temp;
    long long left=low,right=mid+1,count=0;
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
            count+=(mid+1-left);
        }
        
    } 
    
    while(left<=mid){
        temp.push_back(nums[left]);
            left++;
    } 
    while(right<=high){
        temp.push_back(nums[right]);
            right++;
    }
    for(long long i=low;i<=high;i++){
        nums[i]=temp[i-low];
    }
    return count;
}
long long mergesort(long long nums[],long long low,long long high){
    long long count=0;
    if(low<high){
        long long mid=(low+high)/2;
        count+=mergesort(nums,low,mid);
        count+=mergesort(nums,mid+1,high);
        count+=merge(nums,low,mid,high);
    }
    return count;
}
    long long int inversionCount(long long nums[], long long n)
    {
        long long ans=mergesort(nums,0,n-1);
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends