class Solution {
public:
    // bool cmp(vector<int> a , vector<int> b){
    // return a[1]<b[1];    
    // }
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
                sort(intervals.begin() , intervals.end());

        vector<int> v = intervals[0];
        if(intervals.size() == 1){
            ans.push_back(v);
            return ans;
        }
        // for(int i = 0;i<intervals.size() ;i++){
        //     for(auto m:intervals[i]){
        //         cout<<m<<endl;
        //     }
        // }
        for(int i = 1;i<intervals.size(); i++){
            if(v[0]<=intervals[i][0] && v[1]>=intervals[i][0]){
                v[1] = max(v[1] , intervals[i][1]);
            }else{
                ans.push_back(v);
                v = intervals[i];
            }
            
        }
        ans.push_back(v);
        return ans;
    }
};