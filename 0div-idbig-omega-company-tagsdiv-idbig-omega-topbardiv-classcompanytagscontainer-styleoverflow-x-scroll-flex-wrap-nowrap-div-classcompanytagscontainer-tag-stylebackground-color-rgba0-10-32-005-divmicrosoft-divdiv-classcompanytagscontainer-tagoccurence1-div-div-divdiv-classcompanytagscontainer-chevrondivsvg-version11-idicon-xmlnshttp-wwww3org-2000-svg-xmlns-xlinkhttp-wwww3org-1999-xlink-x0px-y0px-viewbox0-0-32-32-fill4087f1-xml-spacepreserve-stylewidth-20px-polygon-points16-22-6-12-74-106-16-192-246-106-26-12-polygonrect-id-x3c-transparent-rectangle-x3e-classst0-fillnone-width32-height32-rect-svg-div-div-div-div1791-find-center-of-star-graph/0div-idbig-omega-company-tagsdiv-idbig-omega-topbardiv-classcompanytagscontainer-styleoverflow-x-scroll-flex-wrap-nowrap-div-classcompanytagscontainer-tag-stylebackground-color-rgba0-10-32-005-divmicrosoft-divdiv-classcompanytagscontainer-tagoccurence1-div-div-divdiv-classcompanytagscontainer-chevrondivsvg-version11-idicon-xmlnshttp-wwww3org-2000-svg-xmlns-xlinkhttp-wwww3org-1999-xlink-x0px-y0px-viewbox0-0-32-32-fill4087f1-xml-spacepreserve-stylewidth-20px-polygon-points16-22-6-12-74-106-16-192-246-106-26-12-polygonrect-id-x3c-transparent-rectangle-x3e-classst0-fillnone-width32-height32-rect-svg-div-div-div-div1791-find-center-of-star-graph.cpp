class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int size = edges.size();
        vector<int> connect;
        vector<int> adj[size+1];
        unordered_map<int , int> mp;
        for(int i = 0 ;i<size ;i++){
            mp[edges[i][0]]++;
            mp[edges[i][1]]++;
        }
        
        for(auto it : mp){
            if(it.second == size) return it.first;
        }
        return 0;
    }
};