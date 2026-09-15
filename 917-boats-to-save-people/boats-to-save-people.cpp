class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {
      sort(arr.begin(), arr.end());
        int n = arr.size();
         int boat = 0;
         int i =0, j=n-1;
         while(i<=j){
            if(arr[i]+ arr[j]<= limit){
            i++;
           j--;
            }
            else{
               j--;
               
            }
            boat++;
         }
         
         return boat;


        
    }
};