class Solution {
public:  
int ncr(int n,int r){
    int ans=1;
    for(int i=0;i<r;i++){
        ans=ans*(n-i);
        ans=ans/(i+1);
    }
    return ans;
}
    vector<vector<int>> generate(int target) {
        vector<vector<int>> arr(target);
        for(int i=0;i<target;i++){
            
            for(int j=0;j<=i;j++){
                arr[i].push_back(ncr(i,j));
            }
        }
        return arr;
    }
};