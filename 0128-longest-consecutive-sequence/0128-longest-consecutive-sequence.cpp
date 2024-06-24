class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0; 

        unordered_set<int> mp(nums.begin(), nums.end());

        int maxCount = 0;

        for(auto it : mp) {
            // Check if num is the start of a sequence
            if(mp.find(it - 1) == mp.end()) {
                int i = it;
                int count = 1;

                while(mp.find(i + 1) != mp.end()) {
                    i++;
                    count++;
                }

                maxCount = max(maxCount, count);
            }
        }

        return maxCount;
    }
};
