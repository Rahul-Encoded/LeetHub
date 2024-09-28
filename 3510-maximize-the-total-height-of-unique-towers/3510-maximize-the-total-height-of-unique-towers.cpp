class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        sort(maximumHeight.begin(), maximumHeight.end());
        int n = maximumHeight.size();
        long long curr = maximumHeight[n-1];
        long long sum = curr;

        for(int i = n-2; i >= 0; i--){

            if(maximumHeight[i] < curr){
                curr = maximumHeight[i];
            } 
            else {
                curr--;
            }

            if(curr <= 0) return -1;

            sum += curr;
        }

        return sum;
    }
};