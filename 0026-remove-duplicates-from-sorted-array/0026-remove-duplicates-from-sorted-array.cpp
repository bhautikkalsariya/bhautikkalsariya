class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int k=1;
        int pos=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=pos){
                k++;
                pos=arr[i];
            }
            else{
                arr.erase(arr.begin()+i);
                i--;
            }
        }
        return k;
    }
};