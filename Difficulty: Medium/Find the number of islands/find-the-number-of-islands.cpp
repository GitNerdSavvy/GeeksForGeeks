class Solution {
  public:
 
    int countIslands(vector<vector<char>>& grid) {
        // Code here
         vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1},{1,1},{-1,1},{1,-1},{-1,-1}};
         int n=grid.size();
         int m=grid[0].size();
         int cnt=0;
         queue<pair<int,int>>q;
         for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                 if(grid[i][j]=='L'){
                     q.push({i,j});
                     cnt++;
                     while(!q.empty()){
                         auto [row,col]=q.front();
                         q.pop();
                         for(int d=0;d<8;d++){
                             int r=row+dir[d][0];
                             int c=col+dir[d][1];
                             if(r<0 || c<0 || r>=n || c>=m) continue;
                             if(grid[r][c]=='W') continue;
                             grid[r][c]='W';
                             q.push({r,c});
                         }
                     }
                 }
             }
         }
         return cnt;
    }
};