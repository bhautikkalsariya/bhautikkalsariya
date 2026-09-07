class Solution {
public:
    double minimumAverage(vector<int>& arr) {
        double mini=INT_MAX;
        sort(arr.begin(),arr.end());
        while(arr.size()!=0){
            double avg=(arr[arr.size()-1]+arr[0])/2.0;
            mini=min(avg,mini);

            arr.pop_back();
            arr.erase(arr.begin()+0);
        }
        return mini;
    }
};