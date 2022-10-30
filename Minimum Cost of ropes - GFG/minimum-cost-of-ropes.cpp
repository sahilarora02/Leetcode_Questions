//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

#include<queue>
class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        // Your code here
        long long cost =0 ;
          priority_queue <long long, vector<long long>, greater<long long> > p;
          for(int i =0 ;i<n ;i++){
              p.push(arr[i]);
          }
          while(p.size()!=1){
              long long a = p.top();
              p.pop();
              long long b = p.top();
              p.pop();    
              long long  sum =a+b;
              p.push(sum);
              cost = cost+sum;
          }
          
          return cost;
    }
};


//{ Driver Code Starts.

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long i, a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.minCost(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends