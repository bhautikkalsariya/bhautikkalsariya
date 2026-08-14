class Solution {
public:


    bool valid(int a,int b,vector<vector<char>>& arr){
        vector<int> a1(10,0);
        vector<int> a2(10,0);
        vector<int> a3(10,0);

        for(int i=0;i<9;i++){
            if(arr[a][i] != '.')
            a1[arr[a][i]-'0']++;
        }
        for(int i=0;i<9;i++){
            if(arr[i][b] != '.')
            a2[arr[i][b]-'0']++;
        }

        int row=(a/3)*3;
        int col=(b/3)*3;
        for(int i=row;i<row+3;i++){
            for(int j=col;j<col+3;j++){
                if(arr[i][j] != '.')
            a3[arr[i][j]-'0']++;
            }
        }
        for(int i=0;i<=9;i++){
            if(a1[i]>1 || a2[i]>1 || a3[i]>1){
                return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& arr) {
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){
              if(!valid(i, j, arr)) {
                    return false;
                }
            }
        }
        return true;
    }
};