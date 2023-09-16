class Solution {
public:
    bool check(vector<int>& bloomDay, int m, int k , int mid){
        long long total = 0 ,cnt = 0;
        for(int i = 0 ; i<bloomDay.size() ; i++){
            if(bloomDay[i]<=mid){
                cnt++;
            }else{
                total+= cnt/k;
                cnt = 0;
            }
        }
        total+=cnt/k;
        // cout<<"total->"<<total<<endl;
        return total >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
         long int val = (long long)m*k;
        if(val > bloomDay.size()) return -1;
        int low = INT_MAX , high = INT_MIN;
        for(int i = 0 ; i < bloomDay.size() ; i++){
            low = min(low, bloomDay[i]);
            high = max(high , bloomDay[i]);
        }
        // cout<<"low->"<<low<<"--high->"<<high<<endl;
        int ans = high;
        while(low<=high){
            int mid = (low+high)/2;
            // cout<<"mid->"<<mid<<endl;
            if(check(bloomDay , m , k ,  mid)){
                // cout<<"mid->"<<"True"<<endl;
                ans = mid;
                high = mid-1;
            }else{
             // cout<<"mid->"<<"False"<<endl;
                low = mid+1;
            }
        }
        return ans;
    }
};