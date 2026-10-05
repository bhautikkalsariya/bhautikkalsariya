class Solution {
public:
    int arrayNesting(vector<int>& arr) {
        int ans=0;
         for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == -1)
                continue;

            int k = i;
            int count = 0;

            while (arr[k] != -1) {
                int temp = arr[k];
                arr[k] = -1;
                k = temp;
                count++;
            }

            ans = max(ans, count);
        }
        return ans;
    }
};