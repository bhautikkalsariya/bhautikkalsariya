class Solution {
public:

    bool checkPossibility(vector<int>& arr) {
        int error=0;
        for(int i=1;i<arr.size();i++){
            if(arr[i-1]>arr[i]){
                if(error>=1){
                    //this error is second time
                    return false;
                }
                error++;
                if(i<2 || arr[i-2]<=arr[i]){
                    arr[i-1]=arr[i];
                }else{
                    arr[i]=arr[i-1];
                }
            }
        }
        return true;
    }
};