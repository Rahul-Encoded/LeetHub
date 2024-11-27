class Solution {
public:

    int bfs(int n, unordered_map<int, vector<int>> &adj){
        queue<int> que;
        que.push(0);
        vector<bool> visited(n, 0);
        visited[0] = 1;

        int level = 0;
        
        while(!que.empty())
        {
        int size = que.size();

            while(size--){
                int node = que.front();
                que.pop();

                if(node == n-1){
                    return level;
                }

                for(int &neighbour: adj[node]){
                    if(!visited[neighbour]){
                        que.push(neighbour);
                        visited[neighbour] = 1;
                    }
                }
            }
            level++;
        }
        return -1;
    }




    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) {
        unordered_map<int, vector<int>> adj;

        for(int i = 0; i <= n-2; i++){
            adj[i].push_back(i+1);
        }

        vector<int> result;

        for(auto &query: queries){
            int u = query[0];
            int v = query[1];

            adj[u].push_back(v);
            int d = bfs(n, adj);
            result.push_back(d);
        }

        return result;
    }
};