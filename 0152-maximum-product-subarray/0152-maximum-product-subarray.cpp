class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int preProd = 1;
        int sufProd = 1;
        int maxProd = INT_MIN;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            preProd *= nums[i]; 
            sufProd *= nums[n-i-1];
            maxProd = max(maxProd, max(sufProd, preProd));
            if (nums[i] == 0) preProd = 1;
            if (nums[n-i-1] == 0) sufProd = 1;
        }
        return maxProd;
    }
};