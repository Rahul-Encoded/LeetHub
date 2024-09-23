class Solution {
public:
    int solve(int i, string& s, unordered_set<string> &st, int n, unordered_map<int, int>& mp){
        if(i >= n) return 0;

        if(mp.find(i) != mp.end()) return mp[i];

        int result = 1 + solve(i+1, s, st, n, mp);

        for(int j = i; j < n; j++){
            string curr = s.substr(i, j-i+1);
            if(st.find(curr) != st.end()) result = min(result, solve(j+1, s, st, n, mp));
        }

        return mp[i] = result;
    }

    int minExtraChar(string s, vector<string>& dictionary) {
        int n = s.length();

        unordered_set<string> st(begin(dictionary), end(dictionary));
        unordered_map<int, int> mp;

        return solve(0, s, st, n, mp);
    }
};