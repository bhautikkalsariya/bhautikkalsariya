class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int fullmaxi=INT_MIN;
        if(arr.size()==1)return arr[0];
        for(int i=0;i<arr.size();i++){
            int maxi=arr[i];
            fullmaxi=max(fullmaxi,maxi);
            for(int j=i+1;j<arr.size();j++){
                maxi*=arr[j];
                fullmaxi=max(fullmaxi,maxi);
            }
        }
        if(arr[arr.size()-1]>fullmaxi)return arr[arr.size()-1];
        return fullmaxi;
    }
};