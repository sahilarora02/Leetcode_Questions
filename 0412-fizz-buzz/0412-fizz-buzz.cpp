#include<string>
class Solution {
public:
    void solve(vector<string> &ans , int n){
        if(n==0){
            return ;
        }
        solve(ans , n-1);
        if(n%3==0 && n%5==0){
            ans.push_back("FizzBuzz");
            return ;
        }
        if(n%3==0){
           ans.push_back("Fizz");
            return ; 
        }
        if(n%5==0){
            ans.push_back("Buzz");
            return ;
        }
        string v="";
           v=to_string(n);
        ans.push_back(v);
    }
    vector<string> fizzBuzz(int n) {
       vector<string> ans ; 
        solve(ans , n);
        return ans;
    }
};