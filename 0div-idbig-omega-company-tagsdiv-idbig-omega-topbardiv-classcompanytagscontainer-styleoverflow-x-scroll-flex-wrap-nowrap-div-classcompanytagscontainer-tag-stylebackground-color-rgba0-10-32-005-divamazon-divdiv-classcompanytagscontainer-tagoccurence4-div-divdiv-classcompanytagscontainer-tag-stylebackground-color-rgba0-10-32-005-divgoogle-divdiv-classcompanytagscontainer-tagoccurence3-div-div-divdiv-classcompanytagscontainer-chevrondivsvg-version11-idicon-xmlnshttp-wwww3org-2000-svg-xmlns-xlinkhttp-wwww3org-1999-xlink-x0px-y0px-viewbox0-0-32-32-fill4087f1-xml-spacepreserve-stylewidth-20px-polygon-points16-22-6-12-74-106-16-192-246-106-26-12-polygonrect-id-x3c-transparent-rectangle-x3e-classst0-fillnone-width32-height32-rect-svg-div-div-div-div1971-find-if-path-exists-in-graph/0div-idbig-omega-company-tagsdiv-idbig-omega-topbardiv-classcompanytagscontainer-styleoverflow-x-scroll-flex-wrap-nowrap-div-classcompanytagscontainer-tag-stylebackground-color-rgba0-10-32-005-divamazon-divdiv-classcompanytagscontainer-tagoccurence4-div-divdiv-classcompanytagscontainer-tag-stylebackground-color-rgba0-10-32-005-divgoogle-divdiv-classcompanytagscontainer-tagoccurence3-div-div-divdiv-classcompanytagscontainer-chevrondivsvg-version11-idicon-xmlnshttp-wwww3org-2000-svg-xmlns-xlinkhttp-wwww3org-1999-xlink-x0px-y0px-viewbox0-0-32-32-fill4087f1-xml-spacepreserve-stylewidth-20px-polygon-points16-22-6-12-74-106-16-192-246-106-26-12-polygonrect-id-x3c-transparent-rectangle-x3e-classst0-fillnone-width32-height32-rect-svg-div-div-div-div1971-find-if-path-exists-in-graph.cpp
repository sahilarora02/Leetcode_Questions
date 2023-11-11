class Solution {
public:
    void dfs(int n , vector<int> adj[] , vector<int> &vis , int node){
        vis[node] = 1;
        for(auto it : adj[node]){
            if(!vis[it]){
                dfs(n ,adj , vis , it);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int src, int destination) {
       vector<int> adj[n];
        
        for(int i = 0; i< edges.size() ;i++){
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int> vis(n , 0);
        dfs(n , adj , vis , src);
        
        if(vis[destination] == 1) return true;
        
        return false;
    }
};