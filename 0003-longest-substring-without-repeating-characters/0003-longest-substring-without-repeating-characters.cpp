class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0,r=0,maxlen=0;
        unordered_map<char,int> mp;
        for(int i = 0; i < 256; i++) {
            mp[(char)i] = -1;
        }
        while(r<n){
            if(mp[s[r]]!=-1){
                if(mp[s[r]]>=l)
                l=mp[s[r]]+1;
            }
            int len=r-l+1;
            maxlen=max(maxlen,len);
            mp[s[r]]=r;
            r++;
        }
        return maxlen;
    }
};