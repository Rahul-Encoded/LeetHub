class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        // int maxi, count, sum;
        // count = 0;
        // for(int i = 0; i < nums.size(); i++){
        //     sum = 0;
        //     for(int j = i; j < nums.size(); j++){
        //         sum+= nums[j];
        //         if(sum == k){
        //             count++;
        //             // break;
        //         }
        //     }
        // }
        // return count;

        int sum, count;
        sum = 0;
        count = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for(int i = 0; i < nums.size(); i++){
            sum += nums[i];

            int rem = sum - k;

            if(mp.find(rem) != mp.end()){
                count += mp[rem];
            }

            mp[sum]++;
        }
        return count;
    }
};