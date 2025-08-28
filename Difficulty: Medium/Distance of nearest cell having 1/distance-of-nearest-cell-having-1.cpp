class Solution {
  public:
    // Function to find distance of nearest 1 in the grid for each cell.
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>>vis(n,vector<int>(m,-1));
        vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    vis[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            auto [row,col]=q.front();
            q.pop();
            
            for(int d=0;d<4;d++){
                int r=row+dir[d][0];
                int c=col+dir[d][1];
                if(r>=0 && c>=0 && c<m && r<n && vis[r][c]==-1){
                   vis[r][c]=vis[row][col]+1;
                   q.push({r,c});
                }
            }
        }
        return vis;
    }
};