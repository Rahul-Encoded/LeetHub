class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();

        int right = n-1;
        int bottom = n-1;
        int top = 0;
        int left = 0;
        int k = n-1;

        vector<int> arr;

        while(k){
            for(int i = left; i <= right; i++){
                arr.push_back(matrix[top][i]);
                top++;
            }
            for(int i = top; i <= bottom; i++){
                arr.push_back(matrix[i][right])
                right--;
            }
            for(int i = right; i >= left; i--){
                arr.push_back(matrix[bottom][i]);
                bottom--;
            }
            for(int i = bottom; i >= top; i--){
                arr.push_back(matrix[i][left]);
                left++
            }
            k--;
        }
        return arr;
    }
};