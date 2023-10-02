class Solution {
public:
    bool dfs(int node, int col, vector<int>& color, vector<vector<int>>& graph) {
        color[node] = col;
        for (int neighbor : graph[node]) {
            cout<<"neighbor->"<<neighbor<<endl;
            if (color[neighbor] == -1) {
                if (!dfs(neighbor, !col, color, graph)) {
                    return false;
                }
            } else if (color[neighbor] == col) {
                return false; // Conflict, not bipartite
            }
        }
        return true;
    }

    bool isBipartite(vector<vector<int>>& graph) {
        int V = graph.size();
        vector<int> color(V, -1);

        for (int i = 0; i < V; i++) {
            if (color[i] == -1) {
                if (!dfs(i, 0, color, graph)) {
                    return false;
                }
            }
        }
        return true;
    }
};
