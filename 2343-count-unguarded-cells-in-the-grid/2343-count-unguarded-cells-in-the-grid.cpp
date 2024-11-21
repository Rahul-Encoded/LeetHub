#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        // Step 1: Create a grid to represent the states
        vector<vector<int>> grid(m, vector<int>(n, 0));
        const int GUARD = 1, WALL = 2, GUARDED = 3;

        // Step 2: Mark guards and walls on the grid
        for (const auto& g : guards) {
            grid[g[0]][g[1]] = GUARD;
        }
        for (const auto& w : walls) {
            grid[w[0]][w[1]] = WALL;
        }

        // Step 3: Mark guarded cells
        auto markDirection = [&](int x, int y, int dx, int dy) {
            while (x >= 0 && x < m && y >= 0 && y < n) {
                if (grid[x][y] == GUARD || grid[x][y] == WALL) break; // Stop at guards or walls
                grid[x][y] = GUARDED;
                x += dx;
                y += dy;
            }
        };

        for (const auto& g : guards) {
            int x = g[0], y = g[1];
            markDirection(x - 1, y, -1, 0); // Up
            markDirection(x + 1, y, 1, 0);  // Down
            markDirection(x, y - 1, 0, -1); // Left
            markDirection(x, y + 1, 0, 1);  // Right
        }

        // Step 4: Count unguarded cells
        int unguardedCount = 0;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 0) { // Unoccupied and unguarded cell
                    ++unguardedCount;
                }
            }
        }

        return unguardedCount;
    }
};
