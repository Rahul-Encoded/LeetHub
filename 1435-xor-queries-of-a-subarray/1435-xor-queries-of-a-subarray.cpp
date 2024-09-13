class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;

        int left;
        int right;

        // for(int i = 0; i < queries.size(); i++){
        //     left = queries[i][0];
        //     right = queries[i][1];
        //     int xorSum = 0;
        //     for(int j = left; j <= right; j++){
        //         xorSum ^= arr[j];
        //     }
        //     ans.push_back(xorSum);
        // }

        vector<int> prefixXor(arr.size());
        prefixXor[0] = arr[0];

        for(int i = 1; i < arr.size(); i++){
            prefixXor[i] = prefixXor[i-1] ^ arr[i];
        }

        for(int i = 0; i < queries.size(); i++){
            left = queries[i][0];
            right = queries[i][1];

            if(left == 0){
                int result = prefixXor[right];
                ans.push_back(result);
            }
            else{
                int result = prefixXor[left - 1] ^ prefixXor[right];
                ans.push_back(result);  
            }

        }

        return ans;
    }
};