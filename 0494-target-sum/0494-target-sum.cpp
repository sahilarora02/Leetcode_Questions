class Solution {
public:
    
    #include <bits/stdc++.h> 

int findWays(vector<int>& arr, int k)

{

    // Write your code here.

    int n = arr.size();

    vector<int> prev(k+1, 0), cur(k+1, 0);

    if(arr[0] == 0) prev[0] =2;

    else prev[0] =1;

    

    if(arr[0] != 0 && arr[0] <= k) prev[arr[0]] =1;

 

    for(int i= 1; i <n ; i++){

        for(int target = 0 ; target <= k ; target++){

            int notpick = prev[target];

            int pick = 0;

            if(arr[i] <= target) pick = prev[target - arr[i]];

            cur[target]=(pick + notpick) ;

        }

        prev = cur;

    }

    return prev[k];

}

int countPartitions(int n, int d, vector<int> &arr) {

    // Write your code here.

    int sum=0;

    for(auto it: arr) sum += it;

    if(sum -d<0 || (sum -d )%2) return false;

    return findWays(arr, (sum -d)/2);

    

}

    
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        return countPartitions(n, target, nums);
    }
};