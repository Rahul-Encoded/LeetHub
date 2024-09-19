class Solution {
public:

vector<int> solve(string s){
    vector<int> ans;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*'){
            vector<int> leftRes = solve(s.substr(0, i));
            vector<int> rightRes = solve(s.substr(i+1));

            for(int &x: leftRes){
                for(int &y: rightRes){
                    if(s[i] == '+') ans.push_back(x+y);
                    else if(s[i] == '-') ans.push_back(x-y);
                    else ans.push_back(x*y);
                }
            }
        }
    }

    if(ans.empty()) ans.push_back(stoi(s));

    return ans;
}
    vector<int> diffWaysToCompute(string expression) {
        return solve(expression);
    }
};