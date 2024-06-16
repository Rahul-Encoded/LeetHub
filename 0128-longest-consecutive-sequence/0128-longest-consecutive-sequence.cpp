class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

       if(nums.empty()) return 0; 

        map<int, int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        int count = 1;
        int maxi = 1;
        auto prev = mp.begin();
        for(auto it = ++mp.begin(); it != mp.end(); it++){
            if(it->first == prev->first + 1){
                count++;
                maxi = max(count, maxi);
            }
            else{
                count = 1;
            }
            prev++;
        }

        return maxi;
    }
};