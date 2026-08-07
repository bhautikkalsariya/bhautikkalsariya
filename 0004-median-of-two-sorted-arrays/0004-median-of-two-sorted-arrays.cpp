class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        int k=m+n;
        vector<int> arr(k);
        for(int i=0;i<m;i++){
            arr[i]=nums1[i];
        }
        for(int i=m;i<k;i++){
            arr[i]=nums2[i-m];
        }
        
        sort(arr.begin(),arr.end());
        if(k%2!=0){
            return arr[k/2];
            
        }
        else{
            return  (arr[(k/2)-1]+arr[(k/2)])/2.0;
        }
    }
};