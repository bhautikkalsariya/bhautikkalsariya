class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int a=0,b=1;
        vector<int> ans(arr.size());
        for(int i=0;i<arr.size();i++){
            if(arr[i]>0){
                ans[a]=arr[i];
                a+=2;
            }
            else{
                ans[b]=arr[i];
                b+=2;
            }
        }
        return ans;
    }
};