class Solution {
public:

   void find(string s , vector<string>& products , vector<vector<string>>& vec)
   {
       int n = s.size();
       vector<string> temp;
       for(int i = 0 ; i<products.size() ; i++)
       {
           if(temp.size() == 3) break;
           string str = products[i].substr(0 , n);
           if(str == s){
              temp.push_back(products[i]);
           }
       }

       vec.push_back(temp);
   }


    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        int n = products.size();
        sort(products.begin() , products.end());



        int m = searchWord.size();
        string s = "";
        vector<vector<string>> vec;
        for(int i = 0 ; i<m ; i++)
        {
           s+=searchWord[i];
           find(s , products , vec);
        }

        return vec;
    }
};