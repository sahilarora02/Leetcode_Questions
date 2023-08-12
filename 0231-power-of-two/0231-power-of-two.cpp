class Solution {
public:
    bool isPowerOfTwo(int n) {
        long long val = 0 ;
        long k = 0;
        while(true){
            val = pow(2, k);
            if(val>n)return false;
            if(val == n)return true;
            k++;
        }
        return false;
    }
};