class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int k = n;
        vector<vector<int>> mat(n,vector<int>(n));
        for (int i = 0; i < n; i++){
            k--;
            for(int j = 0; j < n; j++){
                mat[j][k] = matrix[i][j];
            }
        }
        matrix = mat;
    }
};