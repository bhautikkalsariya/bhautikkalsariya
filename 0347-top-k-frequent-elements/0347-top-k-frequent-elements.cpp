class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        vector<pair<int, int>> v;
        for(auto i:mp){
            v.push_back({i.second,i.first});
        }
        vector<int> ans;
        sort(v.rbegin(), v.rend());
        for(int i=0;i<k;i++){
            ans.push_back(v[i].second);
        }
        return ans;
    }
};