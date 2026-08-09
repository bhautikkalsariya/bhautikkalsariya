class Solution {
public:
    int maxArea(vector<int>& arr) {
        int h;
        int maxarea=0;
        int i=0;
        int j=arr.size()-1;
           while(i<j){
                h=min(arr[i],arr[j]);
                int area=(j-i)*h;
                maxarea=max(maxarea,area);
                if(arr[i]<arr[j])i++;
                else{
                    j--;
                }
        }
        return maxarea;
    }
};