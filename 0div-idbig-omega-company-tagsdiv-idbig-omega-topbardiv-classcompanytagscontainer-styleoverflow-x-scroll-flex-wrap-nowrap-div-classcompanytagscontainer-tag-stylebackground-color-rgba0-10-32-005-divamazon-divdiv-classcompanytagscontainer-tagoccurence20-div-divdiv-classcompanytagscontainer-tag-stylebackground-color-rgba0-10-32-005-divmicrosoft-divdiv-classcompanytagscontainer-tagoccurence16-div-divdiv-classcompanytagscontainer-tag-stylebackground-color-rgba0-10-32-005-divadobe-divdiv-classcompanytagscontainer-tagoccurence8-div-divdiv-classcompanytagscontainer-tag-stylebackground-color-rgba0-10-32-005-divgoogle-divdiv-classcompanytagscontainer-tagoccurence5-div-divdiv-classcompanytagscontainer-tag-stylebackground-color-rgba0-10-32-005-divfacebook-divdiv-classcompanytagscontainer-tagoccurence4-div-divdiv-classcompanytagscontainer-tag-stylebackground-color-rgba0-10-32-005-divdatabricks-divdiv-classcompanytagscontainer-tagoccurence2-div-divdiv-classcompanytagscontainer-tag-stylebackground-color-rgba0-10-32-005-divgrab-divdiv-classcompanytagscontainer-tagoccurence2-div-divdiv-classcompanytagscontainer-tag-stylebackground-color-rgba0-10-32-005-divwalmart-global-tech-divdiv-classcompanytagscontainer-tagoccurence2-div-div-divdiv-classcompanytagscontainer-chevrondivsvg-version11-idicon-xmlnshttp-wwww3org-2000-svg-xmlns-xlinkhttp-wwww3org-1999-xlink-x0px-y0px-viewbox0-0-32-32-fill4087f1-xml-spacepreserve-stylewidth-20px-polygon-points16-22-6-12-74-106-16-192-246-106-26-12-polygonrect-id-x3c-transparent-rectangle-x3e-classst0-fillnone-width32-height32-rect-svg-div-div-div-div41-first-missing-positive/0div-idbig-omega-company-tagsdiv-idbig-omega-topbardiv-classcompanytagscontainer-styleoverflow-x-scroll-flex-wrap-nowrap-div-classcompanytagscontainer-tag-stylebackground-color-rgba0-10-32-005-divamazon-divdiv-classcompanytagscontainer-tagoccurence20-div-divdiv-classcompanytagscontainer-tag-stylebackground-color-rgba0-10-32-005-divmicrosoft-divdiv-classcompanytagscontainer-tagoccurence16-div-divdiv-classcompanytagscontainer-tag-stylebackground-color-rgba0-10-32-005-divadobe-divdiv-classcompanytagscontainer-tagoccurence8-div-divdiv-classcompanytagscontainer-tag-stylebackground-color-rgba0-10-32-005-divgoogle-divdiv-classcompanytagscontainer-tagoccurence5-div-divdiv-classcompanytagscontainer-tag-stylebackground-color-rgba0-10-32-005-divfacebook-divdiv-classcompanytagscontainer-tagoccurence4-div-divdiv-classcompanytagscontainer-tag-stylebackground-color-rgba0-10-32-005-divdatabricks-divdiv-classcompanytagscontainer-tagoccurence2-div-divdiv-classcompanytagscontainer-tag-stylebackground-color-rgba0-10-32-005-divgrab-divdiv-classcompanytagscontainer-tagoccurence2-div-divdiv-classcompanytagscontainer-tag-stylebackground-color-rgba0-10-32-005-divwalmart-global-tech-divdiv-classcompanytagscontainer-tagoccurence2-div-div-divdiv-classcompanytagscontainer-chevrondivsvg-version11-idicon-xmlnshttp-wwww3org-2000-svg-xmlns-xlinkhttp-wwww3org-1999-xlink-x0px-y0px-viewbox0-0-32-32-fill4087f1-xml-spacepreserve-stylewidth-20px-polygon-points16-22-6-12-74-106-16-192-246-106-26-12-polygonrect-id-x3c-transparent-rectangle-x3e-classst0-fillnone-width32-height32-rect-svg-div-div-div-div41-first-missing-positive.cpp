class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
       unordered_map<int , int> m;
        for(auto it : nums){
            m[it]++;
        }
        for(int i = 1 ; i<= nums.size();i++){
            if(m[i] == 0)return i;
        }
        return nums.size()+1;
    }
};