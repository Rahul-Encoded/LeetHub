class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long sum = 0;
        for(int i = 0; i < chalk.size(); i++){
            sum += chalk[i];
        }

        int remainder = k % sum;

        for(int i = 0; i < chalk.size(); i++){
            if(remainder < chalk[i]){
                return i;
            }
            remainder = remainder-chalk[i];
        }
        return -1;
    }
};