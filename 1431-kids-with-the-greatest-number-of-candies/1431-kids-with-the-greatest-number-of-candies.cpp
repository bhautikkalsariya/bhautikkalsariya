class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& arr, int extra) {
        int maxi=*max_element(arr.begin(),arr.end());
        vector<bool> ans;
        for(int i:arr){
            if(i+extra>=maxi)ans.push_back(1);
            else ans.push_back(0);
        }
        return ans;
    }
};