class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        int boat=0;
        while(i<=j){
            if(arr[i]+arr[j]>limit)j--;
            else {i++;j--;}
            boat++;
        }
        return boat;
    }
};