class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       unordered_set<int> s1(nums1.begin() , nums1.end());
        unordered_set<int>s2(nums2.begin() , nums2.end());
        vector<vector<int>> ans(2);
        for(auto&it :nums1){
            if(s2.count(it) == 0){
                ans[0].push_back(it);
                s2.insert(it);
            }
        }
        
        for(auto&it :nums2){
            if(s1.count(it) == 0){
                ans[1].push_back(it);
                 s1.insert(it);
            }
        }
        return ans;
    }
};