class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> hash;   
        unordered_map<int, int> hash2; 
        for(int i = 0; i < arr.size(); i++){
            hash[arr[i]]++;
        }
        bool flag = 1;
        for(auto it: hash){
            hash2[it.second]++;
        }
        for(auto it: hash2){
            if(it.second > 1){
                flag = 0;
            }
        }

        return flag;
    }
};