class Solution {
  public:
    vector<vector<int>> matToAdj(vector<vector<int>>& mat) {
        // code here
        vector<vector<int>>list;
        for(int i=0;i<mat.size();i++){
            vector<int>t;
            for(int j=0;j<mat.size();j++){
                if(mat[i][j]==1){
                    t.push_back(j);
                }
            }
            list.push_back(t);
        }
        return list;
    }
};