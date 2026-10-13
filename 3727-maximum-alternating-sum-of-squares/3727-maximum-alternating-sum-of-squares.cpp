class Solution {
public:
    long long maxAlternatingSum(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            arr[i]=abs(arr[i]);
            
        }
        sort(arr.begin(),arr.end());
        int n=arr.size();
        long long sum1=0;
        for(int i=0;i<(n/2);i++){
            sum1-=(arr[i]*arr[i]);
        }
        for(int i=(n/2);i<(n);i++){
            sum1+=(arr[i]*arr[i]);
        }
        return sum1;
    }
};