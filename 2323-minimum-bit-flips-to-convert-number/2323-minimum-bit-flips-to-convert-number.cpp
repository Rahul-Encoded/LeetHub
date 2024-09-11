class Solution {
public:
    int flipCount(int n){
        int count = 0;
        while (n) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }

    int minBitFlips(int start, int goal) {
        return flipCount(start ^ goal);
    }
};