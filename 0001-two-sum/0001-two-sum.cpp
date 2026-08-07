class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size(),first,sec;
        for(int i=0;i<n;i++){
            int k=arr[i];
            for(int j=i+1;j<n;j++){
                if(k+arr[j]==target){
                    first=i;
                    sec=j;
                }
            }
        }
        return {first,sec};
    }
};