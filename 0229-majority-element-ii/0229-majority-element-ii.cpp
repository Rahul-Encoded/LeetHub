class Solution {
public:

 
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0, count2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;

        for(int i = 0; i < n; i++){
            if(count1 == 0 && nums[i]!=el2){
                count1++;
                el1 = nums[i];
            }
            else if(count2 == 0 && nums[i]!=el1){
                count2++;
                el2 = nums[i];
            }
            else if(nums[i] == el1){
                count1++;
            }
            else if(nums[i] == el2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }

        count1 = 0;
        count2 = 0;

        for(int i = 0; i < n; i++){
            if(el1 == nums[i]) count1++;
            if(el2 == nums[i]) count2++;
        }

        int mini = n/3 + 1;
        vector<int> ans;

        if(count1 >= mini) ans.push_back(el1); 
        if(count2 >= mini) ans.push_back(el2); 

        return ans;
        
    }
};