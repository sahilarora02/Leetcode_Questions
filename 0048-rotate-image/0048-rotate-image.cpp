class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
      // Transposing of Matrix --> Step 1

      int n = matrix.size(), m = matrix[0].size();
        for(int i = 0 ;i<n ;i++){
            for(int j = 0 ; j<m ; j++){
              if(i!=j && i>j){
                  swap(matrix[i][j], matrix[j][i]);
              }  
            }
        }
        
        for(int i = 0 ; i<n ; i++){
            for(int j = 0 ; j<m/2 ; j++){
                swap(matrix[i][j] , matrix[i][m-1-j]);
            }
            cout<<i<<endl;
        }
    }
};