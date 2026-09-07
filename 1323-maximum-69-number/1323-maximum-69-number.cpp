class Solution {
public:
    int maximum69Number (int n) {
        vector<int> arr;
        while(n>0){
            int k=n%10;
            arr.push_back(k);
            n/=10;
        }
        reverse(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]==6){arr[i]=9;break;}
        }
        
        int ans=arr[0];
        for(int i=1;i<arr.size();i++){
            ans=ans*10+arr[i];
        }
        return ans;
    }
};