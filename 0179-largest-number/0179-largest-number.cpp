class Solution {
public:
    string largestNumber(vector<int>& arr) {
        string str="";
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size()-1;j++){
                string s1=to_string(arr[j]);
                string s2=to_string(arr[j+1]);
                if((s1+s2)>(s2+s1))swap(arr[j],arr[j+1]);
            }
        }
        for(int i=arr.size()-1;i>=0;i--){
            str+=to_string(arr[i]);
        }
        if(str[0]=='0')return "0";
        return str;
    }
};