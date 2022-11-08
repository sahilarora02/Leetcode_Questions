#include<string>
class Solution {
public:
  
    bool isPalindrome(string s) {
        for(int i = 0 ;s[i]!='\0' ; i++){
            if (!isalpha(s[i])&&!isdigit(s[i]))
        {  
           
            s.erase(i, 1);
            i--;
        }else{
                s[i]  = tolower(s[i]);
            }
        }
         string y = s;
    reverse(s.begin(),s.end());
     return s==y;
       
    }
};