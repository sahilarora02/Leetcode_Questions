class Solution {
public:
    void solve(vector<int> nums , vector<int> output , int i , vector<vector<int> > &v){
        
        if(i>=nums.size()){
            v.push_back(output);
            return ;
        }
        
        solve(nums , output , i+1 ,v);
        
        int element  = nums[i];
        output.push_back(element);
        solve(nums , output , i+1 , v);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v;
        vector<int> output ; 
        int index = 0;
        solve(nums , output , index , v);
        return v;

    }
};