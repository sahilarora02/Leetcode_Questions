class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum = 0;
        int n = costs.size();
      priority_queue<pair<int,int>> pq;
        // i candidate goes to A rather than B so,
       for(int i = 0 ;i<costs.size() ;i++){
           int diff = costs[i][0] - costs[i][1];
           pq.push({diff , i});
       }
        int cnt = 0;
        while(!pq.empty()){
            int i = pq.top().second;
                        pq.pop();
            if(cnt<n/2){
                sum+=costs[i][1];
            }else{
                sum+=costs[i][0];
            }
            cnt++;
        }
        return sum;
    }
};