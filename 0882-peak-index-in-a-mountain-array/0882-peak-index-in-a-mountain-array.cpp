class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr){
        int L = arr.size()-1;
        int P0 = 0;
        int Pe = L;
        int mid = P0 + ((Pe-P0)/2);

        while(P0 < Pe){
            if(arr[mid] < arr[mid+1]){
                P0 = mid + 1;
            }
            else{
                Pe = mid;
            }
            mid = P0 + ((Pe-P0)/2);
        }
        return P0;
    }
};