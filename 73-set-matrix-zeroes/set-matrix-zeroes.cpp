class Solution {
public:
    void setZeroes(vector<vector<int>>& arr) {
        int m= arr.size(), n = arr[0].size(); 
               vector<bool> row(m,false);
        vector<bool> col(n,false);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if ( arr[i][j]==0){
                    row[i]=true;
                    col[j]=true;

                }
            }
        } 
        for(int i=0; i<m; i++){
            if(row[i]==true){
                for(int j=0; j<n; j++){
                    arr[i][j]=0;
                }

            }
        }
        for(int j=0; j<n; j++){
            if(col[j]==true){
                for(int i=0; i<m; i++){
                    arr[i][j]=0;
                }
            }
        }
    }
        
        
    
};

// void setZeroes(vector<vector<int>>& arr) {
//         vector<vector<int>> copy = arr;
//         int m= arr.size(),n= arr[0].size();
//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 if(copy[i][j]==0){
//                     for(int col=0; col<n; col++){
//                         arr[i][col] = 0;
//                     }
//                     for(int row=0; row<m; row++){
//                         arr[row][j]=0;
//                     }
//                 }
//             }
//         }
        
//     }
// };