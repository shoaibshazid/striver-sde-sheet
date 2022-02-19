// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

 // } Driver Code Ends
class Solution
{
    public:
    //Function to sort an array using quick sort algorithm.
    void quickSort(int nums[], int low, int high)
    {
        if(low<high){
            int p=partition(nums,low,high);
            quickSort(nums,low,p-1);
            quickSort(nums,p+1,high);
        }
    }
    
    public:
    int partition (int nums[], int low, int high)
    {
       int pivotelement=nums[low];
       int count=0;
       for(int i=low+1;i<=high;i++){
           if(nums[i]<=pivotelement){
               count++;
           }
       }
       int pivotIndex=count+low;
       swap(nums[low],nums[pivotIndex]);
       int i=0,j=high;
       while(i<pivotIndex && j>pivotIndex){
           while(nums[i]<=nums[pivotIndex]){
               i++;
           }
           while(nums[j]>nums[pivotIndex]){
               j--;
           }
           if(i<pivotIndex && j>pivotIndex){
            swap(nums[i],nums[j]);
            i++;
            j--; 
        }
       }
       return pivotIndex;
    }
};


// { Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends