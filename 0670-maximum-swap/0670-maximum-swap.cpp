class Solution {
public:
    int maximumSwap(int num) {        
        string numStr = to_string(num);
        int n = numStr.length();
                
        vector<int> lastPos(10, -1);
        for(int i = 0; i < n; i++) {
            lastPos[numStr[i] - '0'] = i;
        }
                
        for(int i = 0; i < n; i++) {
            int currentDigit = numStr[i] - '0';            
            for(int j = 9; j > currentDigit; j--) {                
                if(lastPos[j] > i) {                    
                    swap(numStr[i], numStr[lastPos[j]]);
                    return stoi(numStr);
                }
            }
        }
        
        return num;
    }
};