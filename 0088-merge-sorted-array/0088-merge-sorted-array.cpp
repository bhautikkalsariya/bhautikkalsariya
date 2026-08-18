class Solution {
public:
    void merge(vector<int>& a1, int m, vector<int>& b1, int n) {
        vector<int> c(n+m);
        int a=0,b=0;
        int s=0;
        while(a<m  && b<n){
            if(a1[a]>b1[b]){
                c[s++]=b1[b++];
            }
            else {
                c[s++]=a1[a++];
            }
        }
        while(a<m){
            c[s++]=a1[a++];
        }
        while(b<n){
            c[s++]=b1[b++];
        }
        a1=c;
    }
};