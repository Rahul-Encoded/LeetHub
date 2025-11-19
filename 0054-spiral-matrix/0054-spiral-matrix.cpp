class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ele = n*m;
        int count = 0;

        int right = m-1;
        int bottom = n-1;
        int top = 0;
        int left = 0;
        

        vector<int> arr;

        while(count < ele){
            for(int i = left; i <= right && count < ele; i++){
                arr.push_back(matrix[top][i]);
                count++;
            }
                top++;
            for(int i = top; i <= bottom && count < ele; i++){
                arr.push_back(matrix[i][right]);
                count++;
            }
                right--;
            for(int i = right; i >= left && count < ele; i--){
                arr.push_back(matrix[bottom][i]);
                count++;
            }
                bottom--;
            for(int i = bottom; i >= top && count < ele; i--){
                arr.push_back(matrix[i][left]);
                count++;
            }
                left++;
            
        }
        return arr;
    }
};