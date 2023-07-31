class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> answer;
        int eq , x , y;

        for(int i = 0; i<queries.size() ;i++){
            int count = 0 ,eq = 0;
            for(int j = 0;j<points.size();j++){
                x = points[j][0] ,y=points[j][1];
             eq = pow((x - queries[i][0]) ,2) + pow((y - queries[i][1]) ,2) - pow(queries[i][2] ,2);
                if(eq == 0 || eq<0){
                    count++;
                }
            }
            answer.push_back(count);
        }
        return answer;
    }
};