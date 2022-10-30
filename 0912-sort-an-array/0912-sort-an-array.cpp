#include <bits/stdc++.h>
class Solution {
public:
    void heapify(vector<int>& v ,int n ,int i){
        int Largest = i;
        int Left = 2*i+1 ; 
        int Right = 2*i+2;
        if(Left<n && v[Largest]<v[Left]){
            Largest = Left;
        }
        if(Right < n && v[Largest]<v[Right]){
            Largest = Right;
        }
        if(Largest!=i){
            swap(v[i] , v[Largest]);
            heapify( v, n , Largest);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();
        for(int i = n ; i>=0 ; i--){
        heapify(nums , n , i);    
        }
        while(n!=0){
            swap(nums[0] , nums[n-1]);
            n--;
            heapify(nums , n , 0);
        }
        return nums;
    }
};