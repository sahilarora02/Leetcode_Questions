class Solution {
public:
    void solve(string digits , string output , int index ,   vector<string> &v , string mapp[]){
        
        if(index>=digits.length()){
            v.push_back(output);
            return ;
        }
        
        int number = digits[index] - '0';
        string val = mapp[number];
        for(int i =0 ; i<val.length() ; i++){
            output.push_back(val[i]);
            solve(digits , output , index+1 , v , mapp);
            output.pop_back();
        }
        
        
    }
    vector<string> letterCombinations(string digits) {
        vector<string> v;
        if(digits.length()==0){
            return v;
        }
        int index = 0;
        string output ; 
            string mapp[10]={" " , " ","abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"} ; 
        solve(digits , output , index , v , mapp);
        return v;
    }
};