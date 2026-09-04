class Solution {
public:

void fun(int index,vector<int> temp,vector<int> arr,vector<vector<int>> &ans,int target){
    if(target==0){ans.push_back(temp);return;}
    if(index == arr.size() || target < 0) {
        return;
    }
    if(arr[index]<=target){
        temp.push_back(arr[index]);
        fun(index,temp,arr,ans,target-arr[index]);
        temp.pop_back();
    }
    fun(index+1,temp,arr,ans,target);
}
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;
        int index=0;
        vector<int> temp;
        fun(index,temp,arr,ans,target);

        return ans;
    }
};