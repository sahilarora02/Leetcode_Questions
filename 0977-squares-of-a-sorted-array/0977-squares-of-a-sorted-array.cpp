#include<algorithm>
#include<queue>
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        priority_queue <int, vector<int>, greater<int> > pq;
      vector<int> output;
        for(int i = 0; i<nums.size() ; i++){
           pq.push(nums[i]*nums[i]);
       } 
      while(!pq.empty()){
           int val = pq.top();
        output.push_back(val);
        pq.pop();
      }
       return output;
    }
    
};