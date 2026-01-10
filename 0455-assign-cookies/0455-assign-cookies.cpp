class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gSize = g.size();
        int sSize = s.size();

        int l = 0;
        int r = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int count = 0;
        

        while(l < gSize && r <sSize){
            if(s[r] >= g[l]){
                r++;
                l++;
                count++;
            }
            else r++;
        }
        return count;
    }
};