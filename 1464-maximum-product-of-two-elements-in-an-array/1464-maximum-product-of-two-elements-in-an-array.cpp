class Solution {
public:
    int maxProduct(vector<int>& arr) {
        // sort(arr.begin(),arr.end());
        // int n=arr.size();
        // return (arr[n-2]-1)*(arr[n-1]-1);

        int a=0;
        int b=0;
        if(arr[0]>arr[1]){
            a=arr[0];b=arr[1];
        }
        else{
            a=arr[1];b=arr[0];
        }
        for(int i=2;i<arr.size();i++){
            if(arr[i]>a){
                b=a;
                a=arr[i];
            }
            else if(arr[i]>b){
                b=arr[i];
            }
        }
        return (a-1)*(b-1);
    }
};