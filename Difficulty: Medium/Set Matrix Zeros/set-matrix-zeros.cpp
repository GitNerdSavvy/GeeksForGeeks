class Solution {
  public:
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        vector<int>r(n,1);
        vector<int>c(m,1);
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    r[i]=0;
                    c[j]=0;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(r[i]==0 || c[j] == 0){
                    mat[i][j]=0;
                }
            }
        }
    }
};