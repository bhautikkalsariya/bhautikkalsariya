class Solution {
public:
    int majorityElement(vector<int>& arr) {
        unordered_map<int , int> ans;
        int n=arr.size()/2;
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
        for(auto x:ans){
            if(x.second>n){
                return x.first;
            }
        }
        return 0;
    }
};