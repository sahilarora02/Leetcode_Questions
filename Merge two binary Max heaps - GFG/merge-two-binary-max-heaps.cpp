//{ Driver Code Starts
// Initial Template for C++

// C++ program to merge two max heaps.

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    public:
    void Heapify(vector<int>& v ,int index ,int n){
        int Largest = index ;
        int Left = 2*index+1;
        int Right = 2*index+2;
        
        if(Left < n && v[Largest]<v[Left]){
            Largest =Left;
        }
        if(Right<n && v[Largest]<v[Right]){
            Largest =Right;
        }
        if(Largest!=index){
            swap(v[Largest] , v[index]);
            Heapify(v , Largest ,n);
        }
        
        
        
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        // your code here
        vector<int> v;
        for(int i =0 ; i<n ;i++){
            v.push_back(a[i]);
        }
        for(int i =0 ; i<m ;i++){
            v.push_back(b[i]);
        }
        
        for(int i = ((n+m)-1)/2 ;i>=0 ;i--){
            
         Heapify(v , i ,n+m);
        }
        return v;
    }
};

//{ Driver Code Starts.

bool isMerged(vector<int> &arr1, vector<int> &arr2, vector<int> &merged){
    if (arr1.size() + arr2.size() != merged.size()){
        return false;
    }
    arr1.insert(arr1.end(),arr2.begin(),arr2.end());
    sort(arr1.begin(),arr1.end());
    vector<int> mergedCopy =merged;
    sort(mergedCopy.begin(),mergedCopy.end());
    if (arr1 != mergedCopy){
        return false;
    }
    for(int i = 1; i<merged.size(); i++){
        if(merged[i] > merged[(i-1)/2])
            return false;
    }
    return true;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, i;
        cin >> n >> m;
        vector<int> a(n,0),b(m,0);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (i = 0; i < m; i++) {
            cin >> b[i];
        }
        vector<int> merged, copyA = a, copyB = b;
        Solution obj;
        merged = obj.mergeHeaps(a, b, n, m);
        bool flag = isMerged(copyA, copyB, merged);
        if(flag == false) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}

// } Driver Code Ends