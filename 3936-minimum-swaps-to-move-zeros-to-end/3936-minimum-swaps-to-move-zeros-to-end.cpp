class Solution {
public:
    int minimumSwaps(vector<int>& arr) {
        int k=0;
        int i=0,j=arr.size()-1;
        int n=arr.size();
        while(i<j){
            while(i<n && arr[i]!=0)i++;
            while(j>-1 && arr[j]==0)j--;
            if(i<j){
            swap(arr[i],arr[j]);
            k++;
            i++;
            j--;
            }
        }
        
        return k;
    }
};