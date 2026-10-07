class Solution {
public:
    string removeStars(string str) {
        string ans;

        for(char c : str) {
            if(c == '*') {
                ans.pop_back();
            }
            else {
                ans.push_back(c);
            }
        }

        return ans;
    }
};