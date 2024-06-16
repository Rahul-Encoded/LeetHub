class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return 0;
        }
        else if(x == 0){
            return 1;
        }
        else{
            int n = x;
            long z = 0;
            while(n){
                z = (z * 10) + (n % 10);
                n = (n)/10;
            }
            return (x == z);
        }
    }
};