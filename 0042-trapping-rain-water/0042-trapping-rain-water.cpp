class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int rmax=0,lmax=0,total=0,l=0,r=n-1;
        while(l<r){
            if(arr[l]<=arr[r]){
                if(lmax>arr[l])total+=lmax-arr[l];
                else lmax=arr[l];
                l++;
            }
            else{
                if(rmax>arr[r])total+=rmax-arr[r];
                else rmax=arr[r];
                r--;
            }
        }
        return total;
    }
};