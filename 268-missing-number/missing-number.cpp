class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
            for (int i=0; i<n; i++){
                if (i!=nums[i]){
                    return i;
                }
            } 
            return n;
        }
    
        };
        
    //     for (int i=0;  i<n; i++){
    //         bool flag= false;
    //         for (int ele : nums){
    //             if(ele==i){
    //                 flag = true;
    //                 break;
    //             }

    //         }
    //         if(flag==false)
    //             return i;
            
    //     }
    //     return n; 
    // }
       
    // };
