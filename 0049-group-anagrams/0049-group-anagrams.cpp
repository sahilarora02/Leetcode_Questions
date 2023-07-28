class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for(auto c:strs){
            string s = c;
            sort(s.begin(),s.end());
            mp[s].push_back(c);
        }
        vector<vector<string>> ans;
        for(auto i:mp){
            ans.push_back(i.second);
        }

        return ans;
    }
};