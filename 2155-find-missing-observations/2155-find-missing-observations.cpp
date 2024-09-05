class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int rollsSize  = rolls.size();
        int totalSize = rollsSize + n;

        int sum = mean * totalSize;

        int rollsSum = 0;

        for(int i = 0; i < rollsSize; i++){
            rollsSum += rolls[i];
        }

        int missingSum = sum - rollsSum;

        if (missingSum < n || missingSum > 6 * n) {
            return {};  
        }

        vector<int> result(n, 1);
        missingSum -= n;

        for(int i = 0; i < n && missingSum > 0; i++){
            int add = min(5, missingSum);
            result[i] += add;
            missingSum -= add;
        }

        return result;
    }
};