class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int maxVal = *max_element(nums.begin(), nums.end());
        int maxCount = 0;
        int count = 0;

        for (int num : nums) {
            if (num == maxVal) {
                count++;
                maxCount = max(maxCount, count);
            } else {
                count = 0;
            }
        }

        return maxCount;
    }
};
