#include <string>
class Solution {
public:

     int check(string num , int d1 , int d2){
         bool d2Found = false;
         int n = num.size();
         for(int i = num.size()-1 ; i>=0 ; i--){
             
             char curr = num[i]-'0';
             if(curr == d2 && d2Found == false){
                 d2Found = true;
             }else if(curr == d1 && d2Found == true){
                 return n - (i+2);
             }
             
             
         }
         return n;
     }
    
    int minimumOperations(string num) {
        int n = num.size();
        int ans = num.size();
        
        ans = min(ans , check(num , 0 , 0 ));
        
        ans = min(ans , check(num , 2 ,5));
        
        ans = min(ans , check(num , 5 ,0));

        ans = min(ans , check(num , 7 ,5));
        int zeroCnt = 0;
        for(int i = 0 ; i< n ;i++){
            int curr = num[i]-'0';
            if(curr == 0) zeroCnt++;
        }
        return min(ans , n-zeroCnt);

    }
};