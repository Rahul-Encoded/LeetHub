class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int missed;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i]!=i){
                missed = i;
                break;
            }
        }
        return missed;
    }
};