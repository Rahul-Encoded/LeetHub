class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int mini = INT_MAX;

        if(r==0 || r==1) return min(nums[l], nums[r]);

        while(l<r){
            int mid = l + (r-l)/2;

            if(nums[mid] > nums[l]){
                mini = min(nums[l], mini);
                mini = min(nums[mid], mini);
                mini = min(nums[r], mini);
                l = mid+1;
            }
            else{
                mini = min(nums[r], mini);
                mini = min(nums[mid], mini);
                mini = min(nums[r], mini);
                r = mid-1;
            }
        }

        return mini;
    }
};