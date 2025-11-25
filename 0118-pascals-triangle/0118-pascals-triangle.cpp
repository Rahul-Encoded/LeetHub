class Solution {
public:
   vector<int> getLine(int n){
        vector<int> line = {1};
        
        if (n == 1) return line;

        int ans = 1; 

        for (int i = 1; i < n; i++){
            ans = ans* (n-i);
            ans = ans/i;
            line.push_back(ans);
        }
        return line;
    } 

    vector<vector<int>> generate(int numRows) {
            vector<vector<int>> ans;

            for(int i = 1; i <= numRows; i++){
                ans.push_back(getLine(i));
            }
            return ans; 
        }
};