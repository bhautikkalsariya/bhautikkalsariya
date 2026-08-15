class Solution {
public:
    void sortColors(vector<int>& arr) {
        int sum1=0,sum2=0,sum3=0;
        int n=arr.size();
        
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                sum1++;
            }
            if(arr[i]==1){
                sum2++;
            }
            if(arr[i]==2){
                sum3++;
            }
        }
        int index=0;
        for(int i=0;i<sum1;i++){
            arr[index++] = 0;
        }
        for(int i=0;i<sum2;i++){
             arr[index++] =1;
        }
        for(int i=0;i<sum3;i++){
             arr[index++] = 2;
        }
       
    }
};