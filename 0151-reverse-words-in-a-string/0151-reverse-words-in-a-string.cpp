class Solution {
public:
    string reverseWords(string s) {
        vector<string> str;
        int k=0;
        int n=s.size();
        while(s[k]==' ')k++;
        string p="";
        while(k<n){
            if(s[k]!=' '){
                p+=s[k];
            }
            else{
                if(!p.empty())
                str.push_back(p);
                p="";
            }
            k++;
        }
        if(!p.empty())str.push_back(p);
        string ans="";
        
        for(int i = str.size() - 1; i >= 0; i--){
            ans+=str[i];
            if(i!=0)ans+=' ';
        }
        
        return ans;
    }
};