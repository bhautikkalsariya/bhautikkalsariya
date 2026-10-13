class Solution {
public:
    long long maxAlternatingSum(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(arr[i]<0){
                arr[i]*=-1;
            }
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        long long sum1=0,sum2=0;
        for(int i=0;i<(n/2);i++){
            sum1+=(arr[i]*arr[i]);
        }
        for(int i=(n/2);i<(n);i++){
            sum2+=(arr[i]*arr[i]);
        }
        return sum2-sum1;
    }
};