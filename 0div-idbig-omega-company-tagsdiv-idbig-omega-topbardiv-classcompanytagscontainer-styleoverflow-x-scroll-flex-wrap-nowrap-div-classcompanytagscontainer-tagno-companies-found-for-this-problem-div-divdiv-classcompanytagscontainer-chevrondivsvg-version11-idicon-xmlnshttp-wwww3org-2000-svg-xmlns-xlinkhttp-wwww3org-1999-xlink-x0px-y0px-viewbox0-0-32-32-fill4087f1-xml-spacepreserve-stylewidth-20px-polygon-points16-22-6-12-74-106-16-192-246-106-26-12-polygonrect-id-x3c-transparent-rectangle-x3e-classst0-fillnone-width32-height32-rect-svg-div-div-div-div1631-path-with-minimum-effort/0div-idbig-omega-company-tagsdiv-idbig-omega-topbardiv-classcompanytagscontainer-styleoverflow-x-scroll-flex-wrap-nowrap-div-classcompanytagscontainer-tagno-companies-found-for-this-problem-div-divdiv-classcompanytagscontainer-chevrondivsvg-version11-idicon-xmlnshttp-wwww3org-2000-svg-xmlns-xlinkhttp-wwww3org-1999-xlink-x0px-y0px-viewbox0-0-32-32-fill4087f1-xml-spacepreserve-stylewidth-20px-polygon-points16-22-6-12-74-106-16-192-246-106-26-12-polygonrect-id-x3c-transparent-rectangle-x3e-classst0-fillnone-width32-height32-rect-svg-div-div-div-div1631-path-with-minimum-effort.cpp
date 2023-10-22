class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        
        priority_queue<pair<int , pair<int , int>> , vector<pair<int , pair<int , int>>> , greater<pair<int , pair<int , int>>>> pq;
        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>> dis(n , vector<int>(m , 1e9));
        dis[0][0] = 0;
        pq.push({0 , {0 , 0}});
        int delRow[] = {-1 , 0 , 1 , 0 };
            int delCol[] = {0 , -1 , 0 , 1 };
        while(!pq.empty()){
            int row = pq.top().second.first;
            int col = pq.top().second.second;
            int maxDiff = pq.top().first;
            pq.pop();
            // check for destination later....
            if(row == n-1 && col == m-1){
                return maxDiff;
            }
            
            
            for(int i = 0 ; i<4 ; i++){
                int nRow = row+delRow[i];
                int nCol = col+delCol[i];
                if(nRow>=0 && nRow<n && nCol>=0 && nCol<m){
                    int d = abs(heights[nRow][nCol] - heights[row][col]);
                    int newEffort = max(maxDiff , d);
               if(dis[nRow][nCol] > newEffort){
                        dis[nRow][nCol] = newEffort;
                        pq.push({newEffort , {nRow , nCol}});
                    }
                }
            }
            
            
        }
                   return 0;

    }
};