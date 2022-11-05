class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {        
        int a[m+n];
        int k=0,i=0,j=0;
         while(i<m&&j<n){
             if(nums1[i]>=nums2[j]){
                 a[k]=nums2[j];
                 k++;
                 j++;
             }else{
                 a[k]=nums1[i];
                 k++;
                 i++;
             }
         }
        int diff = ((m+n)-k);
        if(i==m){
           for(int t = 0;t<diff;t++){
            a[k]=nums2[j];
               k++;
               j++;
               
        }  
        }else{
           for(int t = 0;t<diff;t++){
            a[k]=nums1[i];
               k++;
               i++;
               
        }  
        }
      int l=0,p=0;
        while(p<k){
            nums1[l]=a[p];
            p++;
            l++;
        }
    }
};