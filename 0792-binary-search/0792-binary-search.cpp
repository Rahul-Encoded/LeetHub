class Solution {
public:

    int bS(vector<int>& nums, int first, int last, int target){
        if(first > last) return -1;
        
        int mid = first + (last-first)/2;   //index
        if(nums[mid] == target) return mid;

        else if(nums[mid] > target){
            // last = mid;
            return bS(nums, first, mid-1, target);
        }
        else{
            // first = mid;
            return bS(nums, mid+1, last, target);
        }
    }
    
    int search(vector<int>& nums, int target) {
        
        int size = nums.size();
        int first = 0;          //index
        int last = size - 1;    //index

        return bS(nums, first, last, target);
    }
};