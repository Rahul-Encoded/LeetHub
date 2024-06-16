class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> sol;

        for(int i = left; i <= right; i++){
            int j = i;
            bool flag;

            while(j > 0){
                int k = j % 10;
                if(k == 0 || i % k != 0){
                    flag = 0;
                    break;
                } 
                else{
                    flag = 1;
                }
                j = j/10;
            }

            if(flag){
                sol.push_back(i);
            }
        }
        return sol;
    }
};