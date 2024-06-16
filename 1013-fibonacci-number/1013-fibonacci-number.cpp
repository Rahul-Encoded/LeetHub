class Solution {
public:
int res = 1;
    int fib(int n) {

        vector<int> fibo;
        fibo.push_back(0);
        fibo.push_back(1);
        int element;
        if(n > 1){    
            for(int i = 2; i <= n; i++){
                element =  fibo[i-1] + fibo[i-2];
                fibo.push_back(element);
            }
        }  
        return fibo[n];     
    }
};