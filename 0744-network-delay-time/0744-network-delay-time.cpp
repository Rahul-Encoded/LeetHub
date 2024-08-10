#include <vector>
#include <set>
#include <algorithm>

using namespace std;

class Solution {
public:
    const int INF = 1e9 + 10;

    int dijkstra(int vertex, int N, vector<pair<int, int>> G[]){
        vector<int> vis(N + 1, 0);
        vector<int> dist(N + 1, INF);

        set<pair<int, int>> st; //<weight, node>

        dist[vertex] = 0;
        st.insert({dist[vertex], vertex});
        
        while(!st.empty()){
            auto node = *st.begin();
            int distance = node.first;
            int v = node.second;

            st.erase(st.begin());

            if(vis[v]) continue;
            vis[v] = 1;

            for(auto child: G[v]){
                int childV = child.first;
                int childDist = child.second;
                
                if(dist[v] + childDist < dist[childV]){
                    dist[childV] = dist[v] + childDist;
                    st.insert({dist[childV], childV});
                }
            }
        }

        int time = -1;
        for(int i = 1; i <= N; i++){ // Loop through 1 to N
            if(dist[i] == INF){
                return -1;
            }
            time = max(time, dist[i]);
        }
        return time;
    }

    int networkDelayTime(vector<vector<int>>& times, int N, int k) {
        vector<pair<int, int>> G[N + 1]; //<node, weight>
        for(auto vec: times){
            G[vec[0]].push_back({vec[1], vec[2]});
        }
        return dijkstra(k, N, G);
    }
};
