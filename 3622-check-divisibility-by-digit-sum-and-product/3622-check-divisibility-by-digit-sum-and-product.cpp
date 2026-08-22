class Solution {
public:
    bool checkDivisibility(int n) {
        int k=n;
        int sum=0;
        int product=1;
        while(n){
            sum+=(n%10);
            product*=(n%10);
            n/=10;
        }
        return k % (sum+product)==0;
    }
};