class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> c;
        int i=0;
        int j=0;
        

         while(i < m && j<n){
            if(nums1[i]<= nums2[j]){
                c.push_back(nums1[i]);
                i++;
            }
            else{
                c.push_back(nums2[j]);
                j++;
            }

         }
         while(i<m){
            c.push_back(nums1[i]);
            i++;
         }
         while(j<n){
            c.push_back(nums2[j]);
            j++;
         }
         for(int k = 0; k<m+n; k++){
            nums1[k]= c[k];
         }
         


        
    }

    
};