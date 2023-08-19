class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int , int> m;
    for(int i = 0 ; i<nums.size() ; i++){
        m[nums[i]]++;
    }    
        vector<pair<int, int>> v;
        for(auto a : m){
            v.push_back(a);
        }
    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });
        for(int j = 0 ; j<v.size() ; j++){
            cout<<v[j].first<<" - "<<v[j].second<<endl;
        }
                vector<int> ans;
        for(int i = 0  ; i<k ;i++){
            ans.push_back(v[i].first);
        }
 
        return ans;
    }
};