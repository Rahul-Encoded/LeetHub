class Solution {
public:
    string compressedString(string word) {
        string ans;
        int count = 1;
        
        for(int i = 1; i < word.length(); i++){
            char pre = word[i-1];
            char curr = word[i];
            if(curr == pre){
                count++;
                if(count == 10){
                    ans += to_string(9) + curr;
                    count = 1;   
                } 
            }
            else{ 
                ans += to_string(count) + pre;
                count = 1;
            }
        }

        ans += to_string(count) + word.back();

        return ans;
    }
};
