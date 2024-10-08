class Solution {
public:
    int minSwaps(string s) {
        // stack<char> st;
        int count = 0;
        for(char c: s){
            if(c == '['){
                // st.push(c);
                count++;
            }
            else if(count > 0){
                // st.pop();
                count--;
            }
        }

        // return (st.size()+1)/2;
        return (count + 1)/2;
    }
};