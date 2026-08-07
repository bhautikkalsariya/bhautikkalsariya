class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        unordered_map<int , int> ans;
        vector<int> a;
        int n=arr.size()/3;
        for(int i=0;i<arr.size();i++){
            ans[arr[i]]++;
        }
        for(auto x:ans){
            if(x.second>n){
                a.push_back(x.first);
            }
        }
        return a;
    }
};