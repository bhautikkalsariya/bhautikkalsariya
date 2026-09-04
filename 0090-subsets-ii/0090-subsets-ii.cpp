class Solution {
public:

void fun(int index,vector<int> temp,vector<int> arr,vector<vector<int>> &ans){
    ans.push_back(temp);

    for(int i=index;i<arr.size();i++){
        if(i>index && arr[i]==arr[i-1])continue;

        temp.push_back(arr[i]);
        fun(i+1,temp,arr,ans);
        temp.pop_back();
    }
}
    vector<vector<int>> subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int index=0;
        vector<int> temp;
        fun(index,temp,arr,ans);

        return ans;
    }
};