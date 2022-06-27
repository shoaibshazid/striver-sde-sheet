class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>result(n,vector<int>(n,0));
        int minc=0,maxc=n-1,minr=0,maxr=n-1,count=1;
        while(n--){
            for(int i=minc;i<=maxc;i++){
                result[minr][i]=count;
                count++;
                }
            minr++;
            for(int i=minr;i<=maxr;i++){
                result[i][maxc]=count;
                count++;
            }
            maxc--;
            for(int i=maxc;i>=minc;i--){
                result[maxr][i]=count;
                count++;
            }
            maxr--;
            for(int i=maxr;i>=minr;i--){
                result[i][minc]=count;
                count++;
            }
            minc++;
        }
        return result;
    }
};