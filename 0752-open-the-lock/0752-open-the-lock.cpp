class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead(deadends.begin() ,deadends.end());
        queue<pair<string, int>> q;
        unordered_set<string> vis;
        
        if(dead.find("0000") == dead.end()){
            q.push({"0000" , 0});
            vis.insert("0000");
        }
        while(!q.empty()){
            pair<string,int> curr = q.front();
            q.pop();
            
            string s = curr.first;
            int cnt = curr.second;
            
            if(s == target){
                return cnt;
            }
            
            for(int i = 0 ; i<4 ;i++){
                
                string temp1 = s.substr(0 ,i) + to_string((s[i] - '0' + 1)%10) + s.substr(i+1);
                    string temp2 = s.substr(0 ,i) + to_string((s[i] - '0' - 1 + 10)%10)  + s.substr(i+1);
                    
                    if(dead.find(temp1) == dead.end() && vis.find(temp1) == vis.end()){
                        q.push({temp1 , cnt+1});
                        vis.insert(temp1);
                    }
                
                 if(dead.find(temp2) == dead.end() && vis.find(temp2) == vis.end()){
                        q.push({temp2 , cnt+1});
                     vis.insert(temp2);
                    }
            }
        }
        return -1;
    }
};