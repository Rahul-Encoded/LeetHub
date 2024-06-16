class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size() - 1;
        int maxi = INT_MIN;
        for(int i = n; i >= 0; i--){
            if(arr[i] > maxi){
                int temp = arr[i];
                arr[i] = maxi;
                maxi = temp;
            }
            else{
                arr[i] = maxi;
            }
        }
        arr[n] = -1;
        return arr;
    }
};