class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> position;
        for(int i=0;i<s.size();i++){
            if(s[i]==c)position.push_back(i);
        }
        int k=0;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            while(k + 1 < position.size() && i>position[k]){
                k++;
            }
            if(k == 0) {
                ans.push_back(abs(i - position[k]));
            }
            else{
                int min1=abs(i-position[k]);
                int min2=abs(i-position[k-1]);
                int mini=min(min1,min2);
                ans.push_back(mini);

            }
        }
        return ans;
    }
};