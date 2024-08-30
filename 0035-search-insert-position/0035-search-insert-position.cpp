class Solution {
public:
    int bS(vector<int>& nums, int target, int first, int last){
        int mid = first + (last-mid)/2;
        if(first > last) return mid;
        
        else if(nums[mid] == target) return mid;
        
        else if(nums[mid] < target) return bS(nums, target, mid+1, last);
    
        else return bS(nums, target, first, mid-1);
        
    }

    int searchInsert(vector<int>& nums, int target) {
        return bS(nums, target, 0, nums.size()-1);
    }
};