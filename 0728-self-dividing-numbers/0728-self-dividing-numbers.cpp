class Solution {
public:
bool valid(int n){
    int k=n;
    vector<int> arr;
    bool flag=false;
    while(n>0){
        int t=n%10;
        if(t==0){
            flag=1;
            break;
        }
        arr.push_back(t);
        n/=10;
    }
    if(flag)return false;
    for(int i=0;i<arr.size();i++){
        if(k%arr[i]!=0)return false;
    }
    return true;
}
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> arr;
        for(int i=left;i<=right;i++){
            
            if(valid(i))arr.push_back(i);
        }
        return arr;
    }
};