class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string, int> mpp;
        vector<string> ans;
        string word = "";

        for(auto c: s1){
            if(c == ' '){
                if(!word.empty()) mpp[word]++;
                word = "";
            }
            else{
                word += c;
            }
        }
        if (!word.empty()) mpp[word]++;
        
        word = "";
        for(auto c: s2){
            if(c == ' '){
                if(!word.empty()) mpp[word]++;
                word = "";
            }
            else{
                word += c;
            }
        }
        if (!word.empty()) mpp[word]++;

        for(auto it: mpp){
            if (it.second == 1) ans.push_back(it.first);
        }

        return ans;
    }
};