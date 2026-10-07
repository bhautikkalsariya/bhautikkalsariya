class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int> mp;
        for(int i:arr){
            mp[i]++;
        }
        int maxi=-1;
        for(auto i:mp){
            if(i.first==i.second)maxi=max(maxi,i.first);
        }
        
        return maxi;
    }
};