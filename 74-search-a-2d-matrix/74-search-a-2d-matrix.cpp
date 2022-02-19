class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int low=0;
        int high=(rows*cols)-1;
        while(low<=high){
            int mid=(low+(high-low)/2);
            if(matrix[mid/cols][mid%cols]==target) return true;
            else if(matrix[mid/cols][mid%cols]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
};