class Solution {
public:        
    bool isPalindrome(string s){
        string newstr = "";
        bool flag;
        for(int i = 0; i < s.size(); i++){
            if(isalnum(s[i])){
                newstr += tolower(s[i]); 
            }
        }
        
        for(int i = 0; i < newstr.size()/2; i++){
            if(newstr[i] == newstr[newstr.size() - i - 1]){
                flag = 1;
            }
            else{
                flag = 0;
                break;
            }
        }

        return flag;
        // bool flag = help(newstr, 0, newstr.size()-1);
        // return flag;

    }

    // bool help(string s, int left, int right){
    //     if(left >= right){
    //         return true;
    //     }
    //     if(s[left] != s[right]){
    //         return false;
    //     }
    //     left++;
    //     right--;
    //     return help(s, left, right);
    // }
};