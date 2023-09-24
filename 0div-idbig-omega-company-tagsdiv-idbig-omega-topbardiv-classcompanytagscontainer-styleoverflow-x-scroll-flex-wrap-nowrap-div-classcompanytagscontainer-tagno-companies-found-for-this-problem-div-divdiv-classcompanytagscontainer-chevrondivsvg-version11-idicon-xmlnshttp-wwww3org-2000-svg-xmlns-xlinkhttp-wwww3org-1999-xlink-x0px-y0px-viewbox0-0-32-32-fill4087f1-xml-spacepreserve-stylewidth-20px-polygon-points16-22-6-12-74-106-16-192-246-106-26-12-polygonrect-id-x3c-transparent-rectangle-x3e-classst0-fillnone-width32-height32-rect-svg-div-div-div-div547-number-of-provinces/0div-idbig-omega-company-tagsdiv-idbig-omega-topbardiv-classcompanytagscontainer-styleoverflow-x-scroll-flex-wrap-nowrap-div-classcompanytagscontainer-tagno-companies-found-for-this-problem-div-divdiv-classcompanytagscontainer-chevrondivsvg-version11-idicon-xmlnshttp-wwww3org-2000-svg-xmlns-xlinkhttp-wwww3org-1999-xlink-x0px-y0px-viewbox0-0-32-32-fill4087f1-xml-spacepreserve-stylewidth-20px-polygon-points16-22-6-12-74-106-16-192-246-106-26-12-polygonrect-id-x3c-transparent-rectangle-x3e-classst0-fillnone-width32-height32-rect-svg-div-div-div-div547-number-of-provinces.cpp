class Solution {
public:
    void dfs(int i , vector<int>adjLs[] , int vis[]){
        vis[i] = 1;
        for(auto it : adjLs[i]){
            if(!vis[it]){
                dfs(it , adjLs , vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int V = isConnected.size();
        cout<<"V->"<<V<<endl;
        vector<int>adjLs[V];
        for(int i = 0 ; i< V ; i++){
            for(int j = 0 ; j< V ; j++){
                if(isConnected[i][j] == 1 && i!=j){
                    
                adjLs[i].push_back(j);
                adjLs[j].push_back(i);
                }
                
            }
        }
        int vis[V];
        for(int i = 0 ; i<V ; i++){
            vis[i] = 0;
        }
        // vector<int> vis(V , 0);
        int cnt = 0;

        for(int i = 0  ; i < V ; i++){
            if(vis[i] == 0){
                cnt++;
                dfs(i , adjLs , vis);
            }
        }
        return cnt;
        
    }
};