class Solution {
public:
    int minimumPushes(string word) {
        int cnt = 0;
        int size = word.size();
        int i = 1;
        if(size<=8) return size;
        else{
          while(size > 8){
            size = size - 8;
            cnt+=8*i;
              i++;
        }
            cnt+=size*i;
        }
        return cnt;
    }
};