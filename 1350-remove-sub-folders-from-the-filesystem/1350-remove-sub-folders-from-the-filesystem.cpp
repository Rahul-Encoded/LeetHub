class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(begin(folder), end(folder));
        vector<string> res;

        res.push_back(folder[0]);

        for(int i = 1; i < folder.size(); i++){
            string currFolder = folder[i];
            string preFolder = res.back();
            preFolder += '/';

            if(currFolder.find(preFolder)) res.push_back(currFolder);
        }

        return res;
    }
};