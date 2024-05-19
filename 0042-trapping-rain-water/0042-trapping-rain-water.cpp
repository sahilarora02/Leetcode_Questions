class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> prefixMax, suffixMax;
        int n =  height.size();
        int maxi = INT_MIN;
        for(int i = 0 ;i<n ;i++){
                        maxi = max(maxi, height[i]);
            prefixMax.push_back(maxi);
        }
        maxi = INT_MIN;
        for(int i = n-1 ;i>=0 ;i--){
             maxi = max(maxi, height[i]);
            suffixMax.push_back(max(maxi, height[i]));
        }
        reverse(suffixMax.begin(),suffixMax.end());
        int ans = 0;
        for(int i = 0;i<n ;i++){
            int val = min(prefixMax[i], suffixMax[i]) - height[i];
            if(val>0)ans+=val;
        }
        return ans;
    }
};