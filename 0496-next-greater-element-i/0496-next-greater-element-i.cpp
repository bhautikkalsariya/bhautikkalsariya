class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& arr1, vector<int>& arr2) {
        queue<int> q;
        for(int i=0;i<arr2.size();i++){
            q.push(arr2[i]);
        }
        vector<int> ans;
        for(int i=0;i<arr1.size();i++){
            queue<int> s=q;
            while(!s.empty() && s.front()!=arr1[i]){
                s.pop();
            }
            if(!s.empty())
            s.pop();
            int top=-1;
                while(!s.empty()){
                if(s.front()>arr1[i]){
                    top=s.front();
                    break;
                }
                s.pop();
            }
            
            
            ans.push_back(top);
        }
        return ans;
    }
};