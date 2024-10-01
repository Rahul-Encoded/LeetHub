class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> remainderCount(k, 0);
        
        
        for (int num : arr) {
            int remainder = ((num % k) + k) % k; 
            remainderCount[remainder]++;
        }
        
        
        for (int i = 1; i < k; i++) {
            if (remainderCount[i] != remainderCount[k - i]) {
                return false; 
            }
        }
        
        
        if (remainderCount[0] % 2 != 0) {
            return false; 
        }
        
        return true;
    }
};
