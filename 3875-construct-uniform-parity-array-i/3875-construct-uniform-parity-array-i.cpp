class Solution {
public:
bool even(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2!=0)return false;
    }
    return true;
}
bool odd(vector<int> arr){
    for(int i=0;i<arr.size();i++){
        if(arr[i]%2==0)return false;
    }
    return true;
}
    bool uniformArray(vector<int>& arr) {
        if(even(arr))return true;
        if(odd(arr))return true;
        return true;
    }
};