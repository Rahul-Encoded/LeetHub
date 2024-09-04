class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        //North, East, South, West
        int dx[4] = {0, 1, 0, -1};
        int dy[4] = {1, 0, -1, 0};

        set<pair<int, int>> obstacleSet;
        for (const auto& obs : obstacles) {
            obstacleSet.insert({obs[0], obs[1]});
        }

        int x = 0, y = 0;  
        int direction = 0; 
        int maxDistance = 0;

        for (int cmd : commands) {
            if (cmd == -2) {
                
                direction = (direction + 3) % 4;
            } 
            
            else if (cmd == -1) {
                
                direction = (direction + 1) % 4;
            } 
            
            else {
                for (int i = 0; i < cmd; ++i) {
                    int nx = x + dx[direction];
                    int ny = y + dy[direction];

                    if (obstacleSet.find({nx, ny}) != obstacleSet.end()) {
                        break;
                    }

                    x = nx;
                    y = ny;

                    maxDistance = max(maxDistance, x * x + y * y);
                }
            }
        }

        return maxDistance;
    }
};