class Solution {
public:
void next(string& str,int m,int index){
    for(int i=m-2;i>=0;i--){
            if(str[i]<str[i+1]){
                index=i;
                break;
            }
        }

        if(index==-1){
            reverse(str.begin(),str.end());
        }

        for(int i=m-1;i>=0;i--){
            if(str[index]<str[i])
            {
                swap(str[index],str[i]);
                break;
            }
        }

        reverse(str.begin()+index+1,str.end());
}
    string getPermutation(int n, int k) {
        string str="";
        for(int i=1;i<=n;i++){
            str+=to_string(i);
        }
        for(int i=0;i<k-1;i++){
            next(str,str.size(),-1);
        }
        return str;
    }
};