class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        set<vector<int>> ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int k=j+1;
                int l=n-1;
                while(k<l){
                    long long sum=arr[i]+arr[j];
                    sum+=arr[k];
                    sum+=arr[l];
                    if(sum<target)k++;
                    else if(sum>target)l--;
                    else{
                    vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                    ans.insert(temp);
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1])k++;
                    while(k<l && arr[l]==arr[l+1])l--;
                    }

                }
            }
        }
        vector<vector<int>> a(ans.begin(), ans.end());

        return a;
    }
};