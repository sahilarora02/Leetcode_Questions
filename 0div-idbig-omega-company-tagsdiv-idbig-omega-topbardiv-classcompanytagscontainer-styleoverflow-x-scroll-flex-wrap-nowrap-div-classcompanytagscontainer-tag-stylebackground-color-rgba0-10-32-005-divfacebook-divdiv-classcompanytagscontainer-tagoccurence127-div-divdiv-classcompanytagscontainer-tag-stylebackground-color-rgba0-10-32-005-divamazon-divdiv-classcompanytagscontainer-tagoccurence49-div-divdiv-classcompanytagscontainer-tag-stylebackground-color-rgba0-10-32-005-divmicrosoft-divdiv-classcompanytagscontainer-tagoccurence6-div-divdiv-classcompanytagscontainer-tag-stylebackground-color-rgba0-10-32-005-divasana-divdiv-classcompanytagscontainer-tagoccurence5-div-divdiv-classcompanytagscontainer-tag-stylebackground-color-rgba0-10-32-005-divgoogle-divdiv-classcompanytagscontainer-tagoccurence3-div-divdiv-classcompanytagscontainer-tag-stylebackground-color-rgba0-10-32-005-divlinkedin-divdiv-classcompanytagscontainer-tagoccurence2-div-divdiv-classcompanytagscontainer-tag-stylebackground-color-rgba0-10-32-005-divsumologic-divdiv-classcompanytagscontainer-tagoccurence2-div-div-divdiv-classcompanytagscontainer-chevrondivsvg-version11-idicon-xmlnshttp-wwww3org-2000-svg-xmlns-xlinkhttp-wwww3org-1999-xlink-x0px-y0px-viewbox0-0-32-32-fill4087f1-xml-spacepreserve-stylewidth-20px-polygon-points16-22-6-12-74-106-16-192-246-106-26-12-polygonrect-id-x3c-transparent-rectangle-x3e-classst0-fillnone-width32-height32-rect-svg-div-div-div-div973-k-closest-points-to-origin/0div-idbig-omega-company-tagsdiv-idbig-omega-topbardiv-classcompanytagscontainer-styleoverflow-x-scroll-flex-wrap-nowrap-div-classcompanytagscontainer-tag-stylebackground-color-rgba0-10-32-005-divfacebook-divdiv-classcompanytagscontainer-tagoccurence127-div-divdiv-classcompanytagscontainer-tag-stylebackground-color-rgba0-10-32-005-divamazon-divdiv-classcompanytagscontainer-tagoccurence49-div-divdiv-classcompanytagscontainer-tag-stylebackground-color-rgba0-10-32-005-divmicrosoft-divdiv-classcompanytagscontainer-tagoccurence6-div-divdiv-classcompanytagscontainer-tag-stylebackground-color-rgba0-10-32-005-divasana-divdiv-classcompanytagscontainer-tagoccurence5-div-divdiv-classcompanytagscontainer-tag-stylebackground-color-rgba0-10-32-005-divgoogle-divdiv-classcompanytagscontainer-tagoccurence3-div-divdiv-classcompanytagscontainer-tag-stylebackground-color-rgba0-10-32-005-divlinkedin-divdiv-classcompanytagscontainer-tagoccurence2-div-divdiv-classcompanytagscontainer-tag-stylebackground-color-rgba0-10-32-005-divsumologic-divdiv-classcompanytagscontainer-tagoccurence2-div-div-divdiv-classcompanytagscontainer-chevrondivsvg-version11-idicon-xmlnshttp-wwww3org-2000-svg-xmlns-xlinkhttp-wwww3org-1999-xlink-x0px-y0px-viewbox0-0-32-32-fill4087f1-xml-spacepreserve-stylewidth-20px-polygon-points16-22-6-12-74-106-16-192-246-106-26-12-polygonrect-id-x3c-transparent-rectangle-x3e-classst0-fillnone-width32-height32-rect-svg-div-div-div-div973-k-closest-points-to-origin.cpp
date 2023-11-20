class Solution {
public:
    struct Compare {
        bool operator()(const pair<vector<int>, double>& a, const pair<vector<int>, double>& b) {
            return a.second > b.second;  // Using '>' for minimum value on top
        }
    };

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> ans;
        priority_queue<pair<vector<int>, double>, vector<pair<vector<int>, double>>, Compare> pq;

        for (int i = 0; i < points.size(); i++) {
            double distance = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            pq.push({points[i], distance});
        }

        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().first);
            pq.pop();
        }

        return ans;
    }
};
