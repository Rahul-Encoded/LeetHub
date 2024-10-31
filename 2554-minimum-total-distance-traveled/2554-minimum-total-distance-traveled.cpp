#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

class Solution {
public:
    long long n, m;
    vector<long long> robots, factories;
    vector<vector<long long>> dp;

    long long solve(int x, int y) {
        if (x == n) {
            return 0; 
        }
        if (y == m) {
            return 1e13; 
        }

        if (dp[x][y] != -1) {
            return dp[x][y];
        }

        long long ans = 1e13;

        ans = min(ans, solve(x + 1, y + 1) + abs(robots[x] - factories[y]));        
        ans = min(ans, solve(x, y + 1));
        
        return dp[x][y] = ans; 
    }

    long long minimumTotalDistance(vector<int>& robot, vector<vector<int>>& factory) {
        for (auto robo : robot) {
            robots.push_back(robo);
        }
        
        for (const auto& fact : factory) {
            int x = fact[1];
            while(x){
                factories.push_back(fact[0]); 
                x--;
            }
        }

        n = robots.size();
        m = factories.size();

        sort(robots.begin(), robots.end());
        sort(factories.begin(), factories.end());

        dp.assign(n, vector<long long>(m, -1));

        return solve(0, 0);
    }
};
