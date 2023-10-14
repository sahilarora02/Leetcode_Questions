class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
     sort(products.begin() , products.end());
        vector<vector<string>> ans;
        vector<string> temp;
        for(int i = 0 ;i<searchWord.size() ; i++){
            for(int j = 0 ; j<products.size() ; j++){
                if(products[j][i] == searchWord[i]){
                    temp.push_back(products[j]);
                }
            }
              products = temp;
            if(temp.size() > 3){
                            vector<string> temp2;
                int k = 0;
                while(temp2.size()<3){
                    temp2.push_back(temp[k]);
                    k++;
                }
                ans.push_back(temp2);
            }else{
                            ans.push_back(temp);
            }
            temp.clear();
        }
        return ans;
    }
};