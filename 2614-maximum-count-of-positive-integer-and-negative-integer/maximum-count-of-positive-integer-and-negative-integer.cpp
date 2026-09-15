class Solution {
public:
    int maximumCount(vector<int>& arr) {
        
        int neg = lower_bound(arr.begin(),arr.end(),0)-arr.begin();
        int pos = arr.end() - upper_bound(arr.begin(),arr.end(),0);
        return max (neg,pos);
    }
};