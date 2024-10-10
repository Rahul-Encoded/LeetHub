class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<pair<int, int>> st;
        int maxRamp = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (st.empty() || st.top().second > nums[i]) {
                st.push({i, nums[i]});
            }
        }

        for (int i = nums.size() - 1; i >= 0; i--) {
            while (!st.empty() && st.top().second <= nums[i]) {
                maxRamp = max(maxRamp, i - st.top().first);
                st.pop();
            }
        }

        return maxRamp;
    }
};
