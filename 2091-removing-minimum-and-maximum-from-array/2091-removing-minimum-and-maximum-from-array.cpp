class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        if(arr.size()==1)return 1;
        int a=-1;
        int b=-1;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int n=arr.size();
        for(int i=0;i<arr.size();i++){
            if(arr[i]<mini){mini=arr[i];a=i;}
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]>maxi){maxi=arr[i];b=i;}
        }
        
        int left = max(a, b) + 1;

        int right = n - min(a, b);

        int both = min(a, b) + 1 + n - max(a, b);

        return min({left, right, both});
    }
};