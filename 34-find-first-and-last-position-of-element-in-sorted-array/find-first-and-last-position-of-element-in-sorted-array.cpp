class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int target) {
        vector<int> ans(2,-1);
        int n= arr.size();
        int low = 0;
       int high = n-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(arr[mid]>target)
            high=mid-1;
            else if(arr[mid]<target)
            low=mid+1;
            else{
                ans[0]=mid;
                high = mid-1;
            }
        }
         
          low = 0;
        high = n-1;
        while(low<=high){
            int mid= (low+high)/2;
            if(arr[mid]>target)
            high=mid-1;
            else if(arr[mid]<target)
            low=mid+1;
            else{
                ans[1]=mid;
                low=mid+1;
            }
        }
        
        return ans;
    }
};