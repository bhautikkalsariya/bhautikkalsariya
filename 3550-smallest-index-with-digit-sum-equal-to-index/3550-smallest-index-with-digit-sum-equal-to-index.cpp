class Solution {
public:
int sum(int n){
    int s=0;
    while(n>0){
        s+=(n%10);
        n/=10;
    }
    return s;
}
    int smallestIndex(vector<int>& arr) {
        for(int i=0;i<arr.size();i++){
            if(i==sum(arr[i]))return i;
        }
        return -1;
    }
};