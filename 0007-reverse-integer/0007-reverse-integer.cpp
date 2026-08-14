class Solution {
public:
    int reverse(int x) {
        queue<int> q;
        long long num = x;
        int find = 0;

        if(num < 0){
            num = -num;
            find = 1;
        }

        while(num > 0){
            q.push(num % 10);
            num /= 10;
        }

        while(!q.empty() && q.front() == 0){
            q.pop();
        }

        long long result = 0;

        while(!q.empty()){
            result = result * 10 + q.front();
            q.pop();
        }

        if(find == 1) result *= -1;

        if(result > INT_MAX || result < INT_MIN) return 0;

        return result;
    }
};