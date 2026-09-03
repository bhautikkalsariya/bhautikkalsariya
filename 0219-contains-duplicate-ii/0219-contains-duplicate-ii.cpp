class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& arr, int k) {
        unordered_map<int,pair<int,int>> ans;

       for(int i=0;i<arr.size();i++){
        if(ans[arr[i]].second!=0){
            if((i+1-ans[arr[i]].second)<=k)return true;
        }
        ans[arr[i]].first++;
        ans[arr[i]].second=i+1;
       }
       return false;

       

    }
};