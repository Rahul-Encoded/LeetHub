class Solution {
public:
    int minAddToMakeValid(string s) {
        // stack<char> st;
        int open = 0;
        int close = 0;
        for(int i = 0; i < s.length(); i++){  
            // if(!st.empty() && s[i] == ')' && st.top() == '('){  
            //     st.pop();
            // }
            // else{
            //     st.push(s[i]);
            // }

            if(s[i] == '('){
                open++;
            }
            else{
                if(open > 0){
                    open--;
                }
                else{
                    close++;
                }
            }

        }
        // return st.size();
        return (close + open);
    }
};
