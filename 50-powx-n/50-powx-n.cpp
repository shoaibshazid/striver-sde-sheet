class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0,a=n;
        if(n<0)  n=abs(n);
        if(n==0) return 1;
        while(n>0){
            if(n&1){ 
            ans=ans*x;
            n=n-1; }
            x=x*x;
            n=n/2;
        } 
        if(a<0) return 1.0/ans; 
        return ans;
        
    }
};