class Solution {
public:
int sum(vector<int> arr,int a,int b){
    int sum=0;
    for(int i=a;i<=b;i++){
        sum+=arr[i];
    }
    return sum;
}
    vector<int> leftRightDifference(vector<int>& arr) {
        vector<int> ans;
        for(int i=0;i<arr.size();i++){
            int a=0,b=0;
            if(i!=0)a=sum(arr,0,i-1);
            if(i!=arr.size()-1)b=sum(arr,i+1,arr.size()-1);
            ans.push_back(abs(a-b));
        }
        return ans;
    }
};