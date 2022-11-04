class Solution {
public:
    void solve(vector<int> nums , int index , vector<vector<int> > &v){
        if(index>=nums.size()){
            v.push_back(nums);
            return ;
        }
        
        for(int i = index ; i<nums.size() ; i++){
            swap(nums[i] , nums[index]);
            solve(nums , index+1 , v);
            swap(nums[i] , nums[index]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
       vector<vector<int>> perm;
        int index = 0 ; 
        solve(nums , index , perm);
        return perm;
        
    }
};