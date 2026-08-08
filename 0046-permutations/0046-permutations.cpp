class Solution {
public:
void solve(vector<int> arr,vector<vector<int>>& ans,int index){
    if(index>=arr.size()){
        ans.push_back(arr);
        return ;
    }

    for(int i=index;i<arr.size();i++){
        swap(arr[i],arr[index]);
        solve(arr,ans,index+1);
        swap(arr[i],arr[index]);
    }
}
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>> ans;
        int index=0;
        solve(arr,ans,index);
        return ans;

    }
};