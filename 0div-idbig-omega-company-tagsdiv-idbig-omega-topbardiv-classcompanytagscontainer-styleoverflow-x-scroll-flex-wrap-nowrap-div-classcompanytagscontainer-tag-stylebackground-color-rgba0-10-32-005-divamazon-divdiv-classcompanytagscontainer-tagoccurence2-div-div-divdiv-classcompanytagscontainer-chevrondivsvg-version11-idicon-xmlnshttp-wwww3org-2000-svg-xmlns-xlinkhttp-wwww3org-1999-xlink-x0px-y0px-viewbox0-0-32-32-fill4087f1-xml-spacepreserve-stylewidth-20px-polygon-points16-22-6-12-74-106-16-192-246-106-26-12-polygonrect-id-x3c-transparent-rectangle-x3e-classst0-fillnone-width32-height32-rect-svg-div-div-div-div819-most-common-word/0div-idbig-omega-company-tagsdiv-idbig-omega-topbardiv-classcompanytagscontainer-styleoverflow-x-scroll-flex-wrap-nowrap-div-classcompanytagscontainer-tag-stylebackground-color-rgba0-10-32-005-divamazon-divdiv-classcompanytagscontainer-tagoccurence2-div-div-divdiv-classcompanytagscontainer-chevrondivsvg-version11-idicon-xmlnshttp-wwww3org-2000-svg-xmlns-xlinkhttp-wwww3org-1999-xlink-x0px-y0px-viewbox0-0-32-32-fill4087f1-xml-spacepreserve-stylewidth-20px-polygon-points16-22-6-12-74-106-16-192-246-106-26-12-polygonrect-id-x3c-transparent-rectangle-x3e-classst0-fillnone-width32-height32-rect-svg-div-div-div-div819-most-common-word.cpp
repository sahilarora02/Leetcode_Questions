class Solution {
public:
    struct Compare {
        bool operator()(const pair<string, int>& a, const pair<string, int>& b) {
            return a.second < b.second; 
        }
    };
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> m;
        priority_queue<pair<string, int>, vector<pair<string, int>>, Compare> pq;
        for(int i = 0; i < paragraph.size();){
            string s = "";
            while(i < paragraph.size() && isalpha(paragraph[i]))                                               s.push_back(tolower(paragraph[i++]));
            while(i < paragraph.size() && !isalpha(paragraph[i])) i++;
            m[s]++;
        }
        for(auto it : m){
            pq.push({it.first , it.second});
        }
        
        while(!pq.empty()){
            string s = pq.top().first;
             auto it = find(banned.begin(), banned.end(), s);
pq.pop();
    if (it == banned.end()) {
        return s;
    }
        }
       return ""; 
    }
};