class Solution {
public:
    int f(vector<int>& arr, int pages){
    int stu = 1;
    long long totalPages = 0;
    for(int i = 0 ; i<arr.size() ; i++){
        if(totalPages+arr[i]<=pages){
            totalPages+=arr[i];
        }else{
            stu+=1;
            totalPages = arr[i];
        }
    }
    return stu;
}
int findPages(vector<int>& arr, int n, int m) {
    // Write your code here.
    if(m>n) return -1;
    int low = *max_element(arr.begin() , arr.end());
    int high = accumulate(arr.begin() ,  arr.end() , 0);
    while(low<=high){
        int mid = (low+high)/2;
    int cnt = f(arr , mid);
    if(cnt > m) low = mid+1;
    else high = mid-1;

    }
    return low;
}
    int splitArray(vector<int>& nums, int k) {
        return findPages(nums , nums.size() , k);
    }
};