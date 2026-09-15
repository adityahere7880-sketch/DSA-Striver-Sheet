class Solution {
public:
    int mySqrt(int x) {
        for(int i=1; i<=x; i++){
            if(i==x/i)
            return i;
            if(i>x/i)
            return i-1;
        }
         return 0;
    }
 
};