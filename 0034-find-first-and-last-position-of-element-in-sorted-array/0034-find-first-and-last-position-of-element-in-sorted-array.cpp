class Solution {
public:
    vector<int> bS(vector<int>& nums, int target, int first, int last){
        vector<int> indices(2, -1);
        
        if(first > last) return indices;
        
        if(nums.size() == 0) return indices;

        if(nums.size() == 1 && nums[0] == target){
            indices[0] = 0;
            indices[1] = 0;
            return indices;
        }

        int mid = first + (last-first)/2;

        if(nums[mid] == target){
            int pre = mid;
            int post = mid;
            while((pre >= 0) && (nums[pre] == target)){
                pre--;
            }
            while((post < nums.size()) && (nums[post] == target)){
                post++;
            }

            indices[0] = pre+1;
            indices[1] = post-1;
            return indices;
        }
        
        else if(nums[mid] < target){
            return bS(nums, target, mid+1, last);
        }

        else{
            return bS(nums, target, first, mid-1);
        }
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        

        return bS(nums, target, 0, nums.size()-1);
        
    }
};