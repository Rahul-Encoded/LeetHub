class Solution {
public:
    int smallestChair(vector<vector<int>>& times, int targetFriend) {

        //BRUTE FORCE
        int targetAT = times[targetFriend][0];
        sort(begin(times), end(times));
        vector<int> chairs(times.size(), -1);
        int ans;

        for(int i = 0; i < times.size(); i++){
            int AT = times[i][0];
            int BT = times[i][1];

            for(int j = 0; j < chairs.size(); j++){
                if(AT >= chairs[j]){
                    chairs[j] = BT;
                    
                    if(AT == targetAT){
                        ans = j;
                    }
                    
                    break;
                }
            }
        }
        return ans;
    }
};