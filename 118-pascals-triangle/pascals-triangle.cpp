class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1; i<= numRows; i++){
            ans.push_back(vector<int>(i,1));

        }
        for(int i=0; i<ans.size(); i++){
            for(int j=0; j<ans[i].size(); j++){
                if(j!=0 && j!=i)
                ans [i][j] = ans [i-1] [j-1] + ans [i-1][j];
            }
        }
        return ans;
        
    }
};