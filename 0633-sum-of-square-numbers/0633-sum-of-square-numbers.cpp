class Solution {
public:
    bool judgeSquareSum(int n) {
        int k=sqrt(n);
        vector<long long> a;
        for(long long i=0;i<=k;i++){
            a.push_back(i*i);
        }
        int x=0,y=a.size()-1;
        while(x<=y){
            long long sum=a[x]+a[y];
            if(n==sum)return true;
            else if(n>sum)x++;
            else{
                y--;
            }
        }
        return false;
    }
};