class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if (grid[0][0] == 1 || grid.back().back() == 1) {
            return -1; 
        }
        
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        dist[0][0] = 1;
        queue<pair<int, int>> q;
        q.push({0, 0});
        
        vector<int> dr = {-1, -1, -1, 0, 0, 1, 1, 1};
        vector<int> dc = {-1, 0, 1, -1, 1, -1, 0, 1};
        
        while (!q.empty()) {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            
            for (int i = 0; i < 8; i++) {
                int nRow = r + dr[i];
                int nCol = c + dc[i];
                
                if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < n && grid[nRow][nCol] == 0) {
                    if (dist[r][c] + 1 < dist[nRow][nCol]) {
                        dist[nRow][nCol] = dist[r][c] + 1;
                        q.push({nRow, nCol});
                    }
                }
            }
        }
        
        return (dist[n-1][n-1] == INT_MAX) ? -1 : dist[n-1][n-1];
    }
};
