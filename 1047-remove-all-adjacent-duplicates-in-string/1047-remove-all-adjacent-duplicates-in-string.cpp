class Solution {
public:
    string removeDuplicates(string str) {
        stack<char> s;
        for(char c:str){
            if(s.empty()){
                s.push(c);
            }
            else{
                if(s.top()==c)s.pop();
                else{
                    s.push(c);
                }
            }
        }
        string p="";
        while(!s.empty()){
            p=s.top()+p;
            s.pop();
        }
        return p;
    }
};