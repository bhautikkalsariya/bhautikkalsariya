class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int maxocc=0;
        int max1=0;
        arr.push_back(0);
        for(int i=0;i<arr.size();i++){
            if(arr[i]==1){
                max1++;
            }
            else{
                maxocc=max(maxocc,max1);
                max1=0;
            }

        }
        return maxocc;
    }
};