class Solution {
public:
    long long minimumSteps(string s) {
        long long blacks = 0;
        long long swaps = 0;
        for(char c: s){
            if(c == '1'){
                blacks++;
            }
            else{
                swaps += blacks;
            }
        }

        return swaps;
    }
};