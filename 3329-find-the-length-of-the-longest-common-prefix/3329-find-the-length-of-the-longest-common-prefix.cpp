class Solution {
public:
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        unordered_set<int> st;

        for(int i = 0; i < arr1.size(); i++){
            int num = arr1[i];
            while((st.find(num) == st.end()) && (num > 0)){

                st.insert(num);
                num = num/10;
            }
        }

        int result = 0;

        for(int i = 0; i < arr2.size(); i++){
            int num = arr2[i];
            while((st.find(num) == st.end()) && (num > 0)){

                num /= 10;

            }
            
            if(num > 0) result = max(result, static_cast<int>(log10(num) + 1));
        }

        return result;
    }
};