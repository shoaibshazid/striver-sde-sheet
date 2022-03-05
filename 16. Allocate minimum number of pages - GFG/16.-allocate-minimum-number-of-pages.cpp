// { Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    bool solve(int nums[],int mid,int k,int n){
        int sum=0;
        int cnt=1;
        for(int i=0;i<n;i++){
            if(nums[i]>mid) return false;
            else if(nums[i]+sum>mid){
                cnt++;
                sum=nums[i];
            }
            else{
                sum+=nums[i];
            }
        } 
        if(cnt>k) return false;
        return true;
    } 
    public:
    //Function to find minimum number of pages.
    int findPages(int nums[], int n, int m) 
    {
        int low=0;
        int high=0;
        for(int i=0;i<n;i++) high+=nums[i];
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(solve(nums,mid,m,n)==false){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
    return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}
  // } Driver Code Ends