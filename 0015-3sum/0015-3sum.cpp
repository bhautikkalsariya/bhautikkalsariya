class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        set<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=arr[i]+arr[j]+arr[k];
                if(sum<0)j++;
                else if(sum>0)k--;
                else{
                    vector<int> temp={arr[i],arr[j],arr[k]};
                    ans.insert(temp);
                    j++;
                    k--;
                    //while(j<k && arr[j]==arr[j-1])j++;
                    //while(j<k && arr[k]==arr[k+1])k--;
                }
            }
        }

        vector<vector<int>> a(ans.begin(), ans.end());

        return a;
    }
};