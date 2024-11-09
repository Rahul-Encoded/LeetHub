class Solution {
public:
    long long minEnd(int n, int x) {
        long long lastElement = x;

        for(int i = 1; i < n; i++){
            lastElement = x | lastElement+1;
        }

        return lastElement;
    }
};