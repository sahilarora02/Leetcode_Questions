class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int max =  0 , count ;
        for(int i = 0 ; i <n ; i++){
            if(nums[i] == 1){
                count = 0;
                while(i<n  && nums[i]!=0  ){
                        count++;
                        i++;
                }
                if(count > max){
                    max = count;
                }
                
            }
        }
        return max;
    }
};