class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        for(int i=0;i<arr.size();i++){
            int st=arr[i][0];
            int end=arr[i][1];

            for(int j=i+1;j<arr.size();j++){
                if(end>=arr[j][0]){
                    end=max(end,arr[j][1]);
                    i++;
                }
                else{
                    break;
                }
            }
            ans.push_back({st,end});
        }
        return ans;
    }
};