class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arr2 = arr;  
        sort(arr2.begin(), arr2.end());  

        map<int, int> mp;  

        
        int rank = 1;
        for(int i = 0; i < arr2.size(); i++) {
            if(mp.find(arr2[i]) == mp.end()) {  
                mp[arr2[i]] = rank++;
            }
        }

        vector<int> ans;
        
        for(int i = 0; i < arr.size(); i++) {
            ans.push_back(mp[arr[i]]);
        }

        return ans;
    }
};
