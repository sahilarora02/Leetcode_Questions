class Solution {
public:
    int arrangeCoins(int n) {
       long long int totalCoins = 0 ;
        int numOfRows = 1;
        
        for(int i = 1 ; i<=n; i++){
            totalCoins+=i;
            //  cout<<"totalCoins->"<<totalCoins;
            // cout<<"numOfRows->"<<numOfRows<<endl;
         if(totalCoins==n){
                 return numOfRows;
            } else if(totalCoins>n){
               
                return numOfRows-1;
            } 
            numOfRows++;
        }
        return numOfRows-1;
    }
};