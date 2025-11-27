class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    //     int j = 0;
    //     for(int i = m; i < nums1.size(); i++){
    //         if(nums1[i] == 0){
    //             nums1[i] = nums2[j];
    //             j++;
    //         }
    //     }
    //     sort(nums1.begin(), nums1.end());
    // } 
        int i = m -1;
        int j = n-1;
        int k = m+n-1;
        while(i>=0 && j >= 0){
            if(nums1[i] >= nums2[j]){
                nums1[k] = nums1[i];
                nums1[i] = nums2[j];
                i--;
                k--;
            }
            else{
                nums1[k] = nums2[j];
                j--;
                k--;
            }

        }
        while(j>=0){
            nums1[k] = nums2[j];
            j--;
            k--;
        }

    }
};