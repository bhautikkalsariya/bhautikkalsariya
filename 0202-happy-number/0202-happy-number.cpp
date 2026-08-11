class Solution {
public:
int sum(int n){
    vector<int> arr;
    while(n>0){
        int p=n%10;
        arr.push_back(p);
        n/=10;
    }
    int k=0;
    for(int i=0;i<arr.size();i++){
        k+=arr[i]*arr[i];
    }
    return k;
}

    bool isHappy(int n) {
        
        unordered_set<int> seen;
        while(1){
            if (n == 1)
                return true;
            if (seen.count(n)) {
            return false;
        }

        seen.insert(n);
            n=sum(n);
        }
        
        return false;
    }
};