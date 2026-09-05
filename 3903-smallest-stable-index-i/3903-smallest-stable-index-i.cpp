class Solution {
public:

int findmax(vector<int> arr,int t){
    int max=arr[0];
    for(int i=1;i<=t;i++){
        if(max<arr[i])max=arr[i];
    }
    return max;
}

    int firstStableIndex(vector<int>& arr, int k) {
        if(arr.size()==1)return 0;
        
        int small=INT_MAX;
        int mini=-1;
        for(int i=arr.size()-1;i>=0;i--){
               small=min(small,arr[i]);
               int max=findmax(arr,i);
               if( max-small <= k){
                mini=i;
               }
        }
        return mini;
    }
};





