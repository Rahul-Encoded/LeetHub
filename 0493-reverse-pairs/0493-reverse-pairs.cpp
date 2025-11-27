class Solution {
public:
    int count = 0;
    void MSLol(vector<int>& nums, int left, int right){
        if(left >= right) return;
        int mid = (left + right)/2;
        MSLol(nums, left, mid);
        MSLol(nums, mid+1, right);
        int high = mid+1;
        for(int i = left; i <= mid; i++){
            while(high<=right && nums[i] > 2LL*nums[high]){
                high++;
            }
            count += high-(mid+1);
        }
        mergeLol(nums, left, mid, right);
    }

    void mergeLol(vector<int>& nums, int left, int mid, int right){
        int low = left;
        int high = mid+1;
        vector<int> temp;

        while(low<=mid && high<=right){
            if(nums[low] <= nums[high]){
                temp.push_back(nums[low]);
                low++;
            }
            else{
                temp.push_back(nums[high]);
                high++;
                
            }
        } 
        while(low<=mid){
            temp.push_back(nums[low]);
            low++;
        }
        while(high<=right){
            temp.push_back(nums[high]);
            high++;
        }
        for (int i = left; i <= right; i++) {
            nums[i] = temp[i - left];
        }
    }
    int reversePairs(vector<int>& nums) {
        MSLol(nums, 0, nums.size()-1);
        return count;
    }
};