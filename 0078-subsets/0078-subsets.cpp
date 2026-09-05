class Solution {
public:
void fun(int n,vector<vector<int>>& ans,vector<int> temp,vector<int> arr){
    ans.push_back(temp);

    for(int i=n;i<arr.size();i++){
        if(i>n && arr[i]==arr[i-1])continue;

        temp.push_back(arr[i]);
        fun(i+1,ans,temp,arr);
        temp.pop_back();
    }

}
    
    vector<vector<int>> subsets(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> temp;
        fun(0,ans,temp,arr);

        return ans;
    }
};