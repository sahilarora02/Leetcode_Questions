//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
     void subset(int index , vector<int>arr , int n , vector<int>&ans , vector<int>&ds){
         if(index==n){
             int sum = 0;
          
             for(int i = 0 ; i<ds.size() ; i++){
                 sum+=ds[i];
             }
             ans.push_back(sum);
             return ;
         }

         ds.push_back(arr[index]);
    
         subset(index+1 , arr , n , ans , ds);
         ds.pop_back();
         subset(index+1 , arr , n , ans , ds);
        
     }
      
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int> ans;
        vector<int> ds;
        subset(0 , arr , N , ans , ds);
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends