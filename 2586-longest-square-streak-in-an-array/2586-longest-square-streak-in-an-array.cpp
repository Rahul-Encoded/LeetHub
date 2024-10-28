class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        
        unordered_set<int> st;
        
        for(int i = 0; i < nums.size(); i++){
            st.insert(nums[i]);
        }

        int maxStreak = 0;

        for(int i = 0; i < nums.size(); i++){
            long long curr = nums[i];
            int streak = 0;
            while(curr < 1e5){
                if(st.find(curr) == st.end()){
                    break;
                }
                streak++;
                curr *= curr;
            }
            maxStreak = max(maxStreak, streak);
        }

        return (maxStreak <= 1) ? -1 : maxStreak;
    }
};