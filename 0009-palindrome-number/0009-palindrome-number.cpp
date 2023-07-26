class Solution {
public:
    bool isPalindrome(int x) {
       vector<int> v;
        int n = x ;
        long long newn = 0;
        while(n>0){
            v.push_back(n%10);
            n = n/10;
        }
       for(int i = 0;i<v.size();i++){
           newn = newn*10 + v[i];
       }
        if(newn==x)return true;
        return false;
        
    }
};