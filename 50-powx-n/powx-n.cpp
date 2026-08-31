class Solution {
public:
    double myPow(double x, int n) {
        int m=n;
        long long k=abs((long long)n);
        double ans=1;
        while(k>0){
            if(k%2==1){
                ans=ans*x;
                k-=1;
            }
            else {
                x=x*x;
                k/=2;
            }
        }
        if(m<0) return 1/ans;
        return ans;
    }
};