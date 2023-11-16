class Solution {
    int timer = 0;
    private:
    void dfs(int node ,int parent , vector<int> &vis ,vector<int> adj[] ,int tin[] ,int low[], vector<vector<int>> &bridges){
        vis[node] = 1;
        tin[node] = low[node] = timer;
        timer++;
        for(auto it : adj[node]){
            if(it == parent)continue;
            if(vis[it] == 0){
                   dfs(it ,node ,vis ,adj ,tin ,low ,bridges);
                low[node] = min(low[node] , low[it]);
                if(low[it] > tin[node]){
                    bridges.push_back({it , node});
                }
            }else{
             low[node] = min(low[node], low[it]);
            }
        }
    }
public:
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        for(int i = 0 ;i< connections.size(); i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(connections[i][0]);
        }
        vector<int> vis(n ,0);
        int tin[n];
        int low[n];
        vector<vector<int>> bridges;
        dfs(0 ,-1 ,vis , adj ,tin ,low ,bridges);
        return bridges;
    }
};