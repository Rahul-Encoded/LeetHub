class Solution {
public:
    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) {
        unordered_map<int, vector<int>> adj;

        unordered_map<int, int> indegree, outdegree;

        for(auto &edge: pairs){
            int u = edge[0];
            int v = edge[1];

            adj[u].push_back(v);
            outdegree[u]++;
            indegree[v]++;
        }

        int startNode = pairs[0][0];
        for(auto &it: adj){
            int node = it.first;
            if(outdegree[node] - indegree[node] == 1){
                startNode = node; 
                break;
            }
        }

        vector<int> eulerPath;
        stack<int> st;
        st.push(startNode);

         while(!st.empty()) {
            int curr = st.top();
            if(!adj[curr].empty()) {
                int ngbr = adj[curr].back();
                adj[curr].pop_back();
                st.push(ngbr);
            } else {
                eulerPath.push_back(curr);
                st.pop();
            }
        }

        reverse(begin(eulerPath), end(eulerPath));
        vector<vector<int>> result;
        for(int i = 0; i < eulerPath.size()-1; i++) {
            result.push_back({eulerPath[i], eulerPath[i+1]});
        }

        return result;
    }
};