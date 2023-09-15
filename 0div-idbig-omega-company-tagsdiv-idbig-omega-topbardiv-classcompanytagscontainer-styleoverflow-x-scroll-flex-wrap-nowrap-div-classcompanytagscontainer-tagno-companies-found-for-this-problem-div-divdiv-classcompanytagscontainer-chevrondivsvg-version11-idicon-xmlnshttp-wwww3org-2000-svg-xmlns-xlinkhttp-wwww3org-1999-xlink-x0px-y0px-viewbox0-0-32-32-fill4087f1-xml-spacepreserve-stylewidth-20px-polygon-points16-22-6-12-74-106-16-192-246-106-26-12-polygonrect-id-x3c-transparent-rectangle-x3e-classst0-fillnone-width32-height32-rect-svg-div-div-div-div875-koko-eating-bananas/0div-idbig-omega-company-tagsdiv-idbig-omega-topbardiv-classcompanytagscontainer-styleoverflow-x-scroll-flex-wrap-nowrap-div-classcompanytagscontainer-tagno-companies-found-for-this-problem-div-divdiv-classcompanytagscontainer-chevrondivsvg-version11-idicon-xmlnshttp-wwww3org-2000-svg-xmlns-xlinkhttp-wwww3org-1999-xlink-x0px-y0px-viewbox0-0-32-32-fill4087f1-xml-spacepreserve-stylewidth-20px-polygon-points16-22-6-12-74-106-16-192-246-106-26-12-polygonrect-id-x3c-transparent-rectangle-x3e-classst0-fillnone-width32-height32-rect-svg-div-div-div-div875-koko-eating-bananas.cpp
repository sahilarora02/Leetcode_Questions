#include <bits/stdc++.h>
class Solution {
public:
    long long totalHrs(vector<int>& piles , int k){
        long long total = 0;
        for(int i = 0 ; i<piles.size() ; i++){
            if(piles[i]<=k){
                total+=1;
            }else{
                double val = (double)piles[i]/k;
                // cout<<"val>>"<<val<<"-"<<"piles[i]"<<piles[i]<<endl;
             total+=ceil(val);
            }
        }
        // cout<<"-total=>"<<total<<endl;
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 , high = INT_MIN;
        for(int i = 0 ; i<piles.size() ; i++){
            // low = min(low , piles[i]);
            high = max(high,  piles[i]);
        }
        // cout<<"low=>"<<low<<"-"<<"high=>"<<high<<endl;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            // cout<<"k->"<<mid;
            if(totalHrs(piles , mid) <= h){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
            
        }
        return ans;
    }
};