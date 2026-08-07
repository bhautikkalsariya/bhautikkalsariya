class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {
        sort(arr.begin(),arr.end());
       int min=1;
       for(int i=0;i<arr.size();i++){
        if(arr[i]==min){
            min++;
        }
       }
         return min;
    }
};