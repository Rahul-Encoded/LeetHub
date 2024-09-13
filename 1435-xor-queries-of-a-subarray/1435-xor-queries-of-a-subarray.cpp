class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;

        int left;
        int right;

        for(int i = 0; i < queries.size(); i++){
            left = queries[i][0];
            right = queries[i][1];
            int xorSum = 0;
            for(int j = left; j <= right; j++){
                xorSum ^= arr[j];
            }
            ans.push_back(xorSum);
        }

        return ans;
    }
};