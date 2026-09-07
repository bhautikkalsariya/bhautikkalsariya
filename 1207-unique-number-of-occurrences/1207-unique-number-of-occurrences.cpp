class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        vector<int> ans;
        for(auto i:mp){
            ans.push_back(i.second);
        }
        sort(ans.begin(),ans.end());
        for(int i=1;i<ans.size();i++){
            if(ans[i]==ans[i-1])return false;
        }
        return true;
    }
};