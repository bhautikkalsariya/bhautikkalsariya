class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int a=arr[n-1]*arr[n-2]*arr[n-3];
        int b=arr[0]*arr[1]*arr[2];
        int c=arr[0]*arr[1]*arr[n-1];
        int d=arr[0]*arr[n-1]*arr[n-2];
        int maxi=max(max(a,b),max(c,d));
        return maxi;
    }
};