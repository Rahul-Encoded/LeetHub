class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> ans;

        for(int num: nums){
            bool flag = 0;
            for(int i = 0; i <= num; i++){
                if((i | (i+1)) == num){
                    ans.push_back(i);
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                ans.push_back(-1);
            }
        }

        return ans;
    }
};