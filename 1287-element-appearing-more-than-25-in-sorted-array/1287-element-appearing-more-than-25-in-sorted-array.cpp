class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size() , maxi = INT_MIN , ind=0;
        int size = n/4;
        unordered_map<int , int> u;
        for(int i = 0 ; i< n ;i++){
            u[arr[i]]++;
        }
        for(auto it : u){
           maxi = max(maxi , it.second);
        }
        for(int i =  0 ; i<n ; i++){
            if(u[arr[i]] == maxi){
                ind = arr[i];
            }
        }
        return ind;
    }
};