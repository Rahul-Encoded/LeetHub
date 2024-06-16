class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //MOORE'S VOTING ALGORITHM
        int count = 0;
        int element;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                element = nums[i];
                count++;
            }
            else if(nums[i] == element){
                count++;
            }
            else if(nums[i] != element){
                count--;
            }
        }
        int count2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == element){
                count2++;
            }
        }

        return (count2 > nums.size()/2) ? element : -1;
    }
};