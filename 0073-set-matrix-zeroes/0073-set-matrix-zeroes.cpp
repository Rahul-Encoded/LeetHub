class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int, int>> rec;

        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[0].size(); j++){
                if(matrix[i][j] == 0){
                    rec.push_back({i, j});
                }
            }
        }

        for(auto it: rec){
            int row = it.first;
            int col = it.second;
            int i = 0;
            int n = max(matrix.size(), matrix[0].size());
            while(i < n){
                if(i < matrix.size()){
                    matrix[i][col] = 0;
                }
                if(i < matrix[0].size()){
                    matrix[row][i] = 0;
                }
                i++;
            }
        }
    }
};