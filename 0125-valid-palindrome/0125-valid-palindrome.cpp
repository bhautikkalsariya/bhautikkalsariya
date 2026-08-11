class Solution {
public:
    bool isPalindrome(string s) {
       
        int a=0;
        int b=s.size()-1;
        while(a<b){
            if(!isalnum(s[a]))a++;
            else if(!isalnum(s[b]))b--;
            else{
                if(tolower(s[a])==tolower(s[b])){a++;b--;}
                else{
                    return false;
                }
            }
        }
        return true;
    }
};