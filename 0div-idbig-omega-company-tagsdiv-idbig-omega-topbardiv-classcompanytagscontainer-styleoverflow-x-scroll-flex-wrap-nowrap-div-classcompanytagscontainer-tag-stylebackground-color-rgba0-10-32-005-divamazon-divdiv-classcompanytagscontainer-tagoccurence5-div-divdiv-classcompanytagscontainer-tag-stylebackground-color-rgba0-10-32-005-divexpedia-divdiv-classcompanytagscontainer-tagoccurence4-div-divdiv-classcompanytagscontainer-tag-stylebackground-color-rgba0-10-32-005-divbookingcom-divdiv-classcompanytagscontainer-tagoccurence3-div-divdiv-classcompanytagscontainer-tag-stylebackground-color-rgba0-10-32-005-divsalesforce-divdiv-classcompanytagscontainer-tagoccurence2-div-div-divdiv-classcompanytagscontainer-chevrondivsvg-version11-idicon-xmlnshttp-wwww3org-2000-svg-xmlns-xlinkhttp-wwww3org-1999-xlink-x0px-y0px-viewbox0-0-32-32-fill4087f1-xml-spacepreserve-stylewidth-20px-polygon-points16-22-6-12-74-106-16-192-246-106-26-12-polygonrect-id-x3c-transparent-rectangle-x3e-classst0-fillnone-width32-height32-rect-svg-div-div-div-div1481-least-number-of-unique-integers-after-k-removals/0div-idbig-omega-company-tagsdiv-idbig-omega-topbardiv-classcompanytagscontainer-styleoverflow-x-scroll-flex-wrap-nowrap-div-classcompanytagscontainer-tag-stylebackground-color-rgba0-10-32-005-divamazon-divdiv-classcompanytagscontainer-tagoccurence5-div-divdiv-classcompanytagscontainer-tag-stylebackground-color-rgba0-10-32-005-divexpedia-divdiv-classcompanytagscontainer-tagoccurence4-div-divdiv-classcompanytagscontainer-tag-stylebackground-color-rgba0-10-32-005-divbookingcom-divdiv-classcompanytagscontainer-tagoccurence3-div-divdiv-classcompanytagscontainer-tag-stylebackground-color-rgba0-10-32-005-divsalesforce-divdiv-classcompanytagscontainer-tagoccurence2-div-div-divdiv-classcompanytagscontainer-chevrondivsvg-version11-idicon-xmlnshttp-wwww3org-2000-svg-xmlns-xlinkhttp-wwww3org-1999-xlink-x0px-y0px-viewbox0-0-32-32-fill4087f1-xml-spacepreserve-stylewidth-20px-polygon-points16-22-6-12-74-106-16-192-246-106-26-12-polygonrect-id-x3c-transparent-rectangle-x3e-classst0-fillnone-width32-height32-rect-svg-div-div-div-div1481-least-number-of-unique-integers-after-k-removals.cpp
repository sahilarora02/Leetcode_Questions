class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int,int> mp;
        for(int i = 0;i<arr.size() ;i++){
            mp[arr[i]]++;
        }
        auto compare = [](const pair<int, int>& lhs, const pair<int, int>& rhs) {
        return lhs.second > rhs.second;
        };

        priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(compare)> pq(compare);
        for(auto it: mp){
            pq.push({it.first ,it.second}); 
        }
        
        while(k || !pq.empty()){
            int num = pq.top().first;
            int freq = pq.top().second;
            
            cout<<"num: "<<num<<"freq: "<<freq<<endl;
            
            if(freq>k){
                return pq.size();
            }
            if(freq<=k){
                k -= freq;
                pq.pop();
            }   
        }
        
        
        if(pq.empty()){
            return 0;
        }
        
        return pq.size();
    }
};