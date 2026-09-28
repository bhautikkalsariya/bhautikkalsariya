class Solution {
public:
    int maxDepth(string s) {
       
        int maxi1=0;
        int ans=0;

        for(char c:s){
            if(c=='('){
                maxi1++;
                ans=max(ans,maxi1);
            }
        else  if(c==')'){
            
            maxi1--;
        }
        }
       
        return ans;
    }
};