class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int size = numbers.size();

        int m = 0, n = size-1;

        while(m < n){
            if(numbers[m] + numbers[n] == target){
                result.push_back(m+1);
                result.push_back(n+1);
                break;
            }
            else if(numbers[m] + numbers[n] < target){
                m++;
            }
            else{
                n--;
            }
        }
        return result;
    }
};