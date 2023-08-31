class Solution {
public:
    int lengthOfLongestSubstring(string str) {
  vector<int> mpp(256 , -1);
        int left = 0 , right = 0 , len = 0 ;
        int n = str.size();
        while(right<n){
            if(mpp[str[right]]!=-1) left = max(left , mpp[str[right]]+1);
            mpp[str[right]] = right;
            
            len = max(len , right-left+1);
        right++;
        }
        return len;
    }
};