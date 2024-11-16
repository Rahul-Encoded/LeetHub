class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int i = 0;
        int j = k - 1;
        vector<int> res; 
        int maxi = nums[0];
        bool flag = 1;

        while (j < nums.size()) {
            
            maxi = nums[i];
            flag = 1;  
            
            for (int m = i; m < j; m++) {  
                if (nums[m] + 1 != nums[m + 1]) {  
                    flag = 0;
                    break;
                }
            }

            for (int m = i; m <= j; m++) {
                maxi = max(maxi, nums[m]);
            }
            
            (flag) ?  res.push_back(maxi) : res.push_back(-1);

            i++;
            j++;
        }

        return res;
    }
};
