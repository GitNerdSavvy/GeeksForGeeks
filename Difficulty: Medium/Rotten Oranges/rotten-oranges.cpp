class Solution {
  public:
    int orangesRot(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<pair<int,int>,int>>q;
        vector<vector<int>>vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
              
            }
        }
        
        
        int t=0;
        vector<vector<int>>dir={{0,1},{1,0},{0,-1},{-1,0}};
        
        while(!q.empty()){
            // auto elem = q.front();
            // auto [[row, col], t] = elem;
            auto elem = q.front(); q.pop();
            int row = elem.first.first;
            int col = elem.first.second;
             t = elem.second;
            for(int d=0;d<4;d++){
                int r=row+dir[d][0];
                int c=col+dir[d][1];
                
                if(r>=0 && c>=0 && r<n && c<m && vis[r][c]!=2 && mat[r][c]==1){
                    q.push({{r,c},t+1});
                    vis[r][c]=2;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(vis[i][j]!=2 && mat[i][j]==1){
                    return -1;
                }
            }
        }
        
        return t;
    }
};