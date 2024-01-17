class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        set<int> s;
        for(int i = 0 ;i<arr.size() ;i++){
            mp[arr[i]]++;
        }

        for(auto it: mp){
            if(s.find(it.second)!=s.end()){
                return false;
            }
            s.insert(it.second);
        }
        return true;
    }
};