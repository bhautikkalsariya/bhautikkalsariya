class Solution {
public:

    int maxProduct(int n) {
        vector<int> arr;
        while(n>0){
            int k=n%10;
            arr.push_back(k);
            n/=10;
        }
        sort(arr.begin(),arr.end());
        int y=arr.size();
        return arr[y-1]*arr[y-2];
    }
};