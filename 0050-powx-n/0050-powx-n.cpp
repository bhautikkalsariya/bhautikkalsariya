class Solution {
public:
    double myPow(double x, int n) {
        double ans=1.0;
        long long pow=n;
        if(n<0)pow*=-1;
        while(pow>0){
            if(pow%2==1){
                ans*=x;
                pow-=1;
            }
            else{
                x*=x;
                pow/=2;
            }
        }
        if(n<0)return 1.0/ans;
        return ans;
    }
};