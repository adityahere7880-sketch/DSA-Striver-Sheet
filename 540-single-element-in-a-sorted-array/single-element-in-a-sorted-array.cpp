class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {
        int n = arr.size();
        if(n==1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2])
        return arr[n-1];
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if( arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1])
            return arr[ mid];
            int f = mid;
            int s = mid;
            if(arr[mid]==arr[mid-1])
            f = mid-1;
            else s = mid+1;
            if((f-low) % 2 == 1)
            high = f-1;
            else low  =  s+1;

             
        }
        return 15858;
    }
};