class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        // cout<<"k : "<<k<<endl;
        if(k == 0||k == n){
            return ;
        }
        if(k>n){
            k = k%n;
        }
        vector<int> output;
        for(int i = n-k ; i < n ; i++ ){
            // cout<<"nums[i]: "<<nums[i]<<endl;
            output.push_back(nums[i]);
        }
        for(int i = 0 ; i < n-k ; i++){
          output.push_back(nums[i]);
        // cout<<"nums[i]: "<<nums[i]<<endl;

        }
        for(int i =  0 ;i < n ; i++){
            nums[i] = output[i];
        }
        return ; 
    }
};