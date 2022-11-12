#include<unordered_map>
class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int ,int> um;
        while(n!=1){
         
            int k = 0;
            while(n>0){
                int x = n%10;
                k+=x*x;
                n = n/10;
                    
            }
            n = k;
            if(um[n]>0){
             return false;
         }
            um[n]++;

        }
        return true;
    }
};