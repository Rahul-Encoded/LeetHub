class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int size = code.size();
        vector<int> decode(size);

        for (int i = 0; i < size; i++) {
            int sum = 0;

            if (k > 0) {
                for (int j = 1; j <= k; j++) {
                    sum += code[(i + j) % size];
                }
            } 
            else if (k < 0) {
                for (int j = -1; j >= k; j--) {
                    sum += code[(size + (i + j) % size) % size];
                }
            }

            decode[i] = sum;
        }

        return decode;
    }
};
