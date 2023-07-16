class Solution {
public:
    char findTheDifference(string s, string t) {
        
        unordered_map<char , int> u;
            for(int i = 0 ;s[i]!='\0' ;i++){
                u[s[i]]++;
            }
        for(int i=0;t[i]!='\0';i++){
            // cout<<t[i] << " "<<u[t[i]]<<endl;
            if(u[t[i]]==0){
                return t[i];
            }
            u[t[i]]--;
        }
        return ' ';
    }
};