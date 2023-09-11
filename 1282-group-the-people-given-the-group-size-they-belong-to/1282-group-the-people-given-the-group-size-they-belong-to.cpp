class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
     vector<vector<int>> ans;
        unordered_map<int ,vector<int>> mp;
        for(int i = 0 ; i< groupSizes.size() ;i++){
            int val = groupSizes[i];
            mp[val].push_back(i);
            if(mp[val].size() == val){
                ans.push_back(mp[val]);
                mp[val].clear();
            }
        }
        return ans;
    }
};